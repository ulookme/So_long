/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_new_exit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:32:33 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/21 17:51:03 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	print_new_exit(t_game *game)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (game->map.bonus == 0)
	{
		mlx_destroy_image(game->mlx_ptr, game->exit.img_ptr);
		game->exit.img_ptr = mlx_xpm_file_to_image(game->mlx_ptr, \
			"asset_solong/terre.xpm", &game->exit.size.x, &game->exit.size.y);
	}
}
