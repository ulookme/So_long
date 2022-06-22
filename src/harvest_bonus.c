/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harvest_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:36:03 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/21 15:36:13 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	harvest_bonus(t_game *game)
{
	if (game->map.tab[game->map.player_p.y / 100] \
			[game->map.player_p.x / 100] == BONUS)
	{
		game->map.bonus -= 1;
		game->map.tab[game->map.player_p.y / 100] \
			[game->map.player_p.x / 100] = FLOOR;
	}
}
