/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:31:50 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/22 13:33:42 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

#define FRAMES 2
#define SPEED 30

void	render_animation(t_game *game, void *img, void *img2, t_vector3 pos)
{
	if (pos.z > __INT_MAX__)
		pos.z = 0;
	if ((pos.z / SPEED) % FRAMES)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
			img, pos.x, pos.y);
	else
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
			img2, pos.x, pos.y);
}

int	main(int argc, char **argv)
{
	t_game	game;

	check_file_map(argc, argv);
	init_vars(&game);
	init_map(&game, argv[1]);
	check_size_map(&game);
	if (init_game(&game))
		return (1);
	if (!game.wall.img_ptr || !game.floor.img_ptr || !game.bonus.img_ptr
		|| !game.exit.img_ptr || !game.player.img_ptr || !game.bonus2.img_ptr
		|| !game.player2.img_ptr)
		return (ft_printf("\033[31;1mError: couldn't load images!\n\033[0m"));
	ft_input(0, &game);
	mlx_key_hook(game.win_ptr, ft_input, &game);
	mlx_loop_hook(game.mlx_ptr, render_hook, &game);
	mlx_loop(game.mlx_ptr);
}
//norminette -R CheckDefine