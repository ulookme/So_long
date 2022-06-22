/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_background.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:25:41 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/21 13:27:30 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	render_background(t_game *game)
{
	int	x;
	int	y;

	x = 0;
	y = -1;
	while (x < game->map.lines)
	{
		while (y++ < game->map.columns - 1)
		{
			mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
			game->floor.img_ptr, y * game->floor.size.x, \
			x * game->floor.size.y);
		}
		y = -1;
		x++;
	}
}

// fonction permettant d'ajouter le sol sur toute la map 
// (les autres textures sont par dessus)
