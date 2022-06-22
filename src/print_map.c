/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:32:33 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/22 11:04:31 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	print_map(t_game *game)
{
	int	x;
	int	y;

	x = 0;
	y = -1;
	while (x < game->map.lines)
	{
		while (y++ < game->map.columns)
		{
			if (game->map.tab[x][y] == WALL)
				mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->wall.img_ptr, y * game->wall.size.x, x * game->wall.size.y);
			else if (game->map.tab[x][y] == PLAYER)
				mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->player.img_ptr, y * game->player.size.x, x * game->player.size.y);
			else if (game->map.tab[x][y] == BONUS)
				mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->bonus.img_ptr, y * game->bonus.size.x, x * game->bonus.size.y);
			else if (game->map.tab[x][y] == EXIT)
				mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->exit.img_ptr, y * game->exit.size.x, x * game->bonus.size.y);
		}
		y = -1;
		x++;
	}
}

// fonction permettant d'imprimmer la map , 
//pour chaque texture il y a une condition 
// par exemple si je trouve un '1' qui 
//est = a WALL j'imprimerai ma texture de wall. 
// J'imnrique 2 boucles pour parcourir toute ma map dans son integralite. 
