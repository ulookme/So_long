/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   victory.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:40:55 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/21 15:41:05 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	victory(t_game *game)
{
	if (game->map.tab[game->map.player_p.y / 100] \
			[game->map.player_p.x / 100] == EXIT)
	{
		ft_printf("nbre de coups -> %d\n", game->movements);
		win_msg("GG, vous avez gagne !");
	}
}

//Fonction affichant le message de la victoire une fois la position du joueur 
//sur la sortie !
