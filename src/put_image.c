/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:26:06 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/21 17:52:24 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static t_vector3	new_vector(int x, int y, int z)
{
	t_vector3	v;

	v.x = x;
	v.y = y;
	v.z = z;
	return (v);
}

static void	render_block(t_game *game, char tile, t_vector3 pos)
{
	if (tile == WALL)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
	game->wall.img_ptr, pos.y * game->wall.size.x, pos.x * game->wall.size.y);
	else if (tile == BONUS)
		render_animation(game, game->bonus.img_ptr, game->bonus2.img_ptr, \
	new_vector(pos.y * game->bonus.size.x, pos.x * game->bonus.size.y, pos.z));
	else if (tile == EXIT)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
	game->exit.img_ptr, pos.y * game->exit.size.x, pos.x * game->bonus.size.y);
}

void	put_image(t_game *game)
{
	static size_t	cycle;
	int				x;
	int				y;

	x = 0;
	y = -1;
	render_background(game);
	render_animation(game, game->player.img_ptr, game->player2.img_ptr, \
		new_vector(game->map.player_p.x, game->map.player_p.y, cycle++));
	while (x < game->map.lines)
	{
		while (y++ < game->map.columns)
			render_block(game, game->map.tab[x][y], new_vector(x, y, cycle));
		y = -1;
		x++;
	}
}

//Fonction me permettant de reimprimer ma carte a chaque fois que je reset
//ma fenetre du jeu les conditions pour les BONUS et EXIT sond different car
//il faut recuperer les bonus et donc il ne doivent plus reaparaitre , pour
//la sortie j'ai decide de change de sprite quand le nombre de bonus est a 0!
