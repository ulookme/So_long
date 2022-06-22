/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_player_position.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:47:21 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/22 11:03:55 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	init_player_position(t_game *game, char *line, int y)
{
	int	x;

	x = 0;
	while ((line[x] != '\0') && line[x] != PLAYER)
		x++;
	if (line[x] == '\0')
		return ;
	game->map.player_p.x = x * 100;
	game->map.player_p.y = y * 100;
}

// Fonction permettant d'initialiser la position du joueur 
//, tant qu'il ne trouve 
// pas 'P' il continue d'avancer. 
//Une fois le P recu , je retourne la position 
// du joueur sur les deux axes 
//(je multiplie par 100 car mes sprites sont sur du 100*100)
