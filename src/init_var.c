/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_var.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:27:25 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/14 12:27:36 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	init_vars(t_game *game)
{
	game->map.bonus = 0;
	game->map.exit = 0;
	game->map.nb_player = 0;
	game->movements = 0;
}

//Initialisation des valeurs  a 0 pour 
//le nbre de bonus 
//le nbre de sortie 
//le nbre de joueur(s) 
//le nbre de mouvements faits.
