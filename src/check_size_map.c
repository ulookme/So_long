/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_size_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:23:59 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/20 11:13:46 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	check_wall_lines(t_game *game)
{
	int	i;

	i = 0;
	while (i < game->map.lines)
	{
		if (game->map.tab[i][0] != WALL
				|| game->map.tab[i][game->map.columns - 1] != WALL)
			return (0);
		i++;
	}
	return (1);
}

int	check_wall_columns(t_game *game)
{
	int	i;

	i = 0;
	while (i < game->map.columns)
	{
		if (game->map.tab[0][i] != WALL
				|| game->map.tab[game->map.lines - 1][i] != WALL)
			return (0);
		i++;
	}
	return (1);
}

int	check_lenth_map(t_game *game)
{
	int	i;

	i = 0;
	while (i < game->map.lines)
	{
		if (ft_new_strlen(game->map.tab[i]) != ft_new_strlen(game->map.tab[0]))
			return (0);
		i++;
	}
	return (1);
}

void	check_size_map(t_game *game)
{
	if (game->map.lines == game->map.columns)
		error_msg("Erreur, la map est un carre !");
	else if (check_lenth_map(game) == 0)
		error_msg("Erreur, la map n'est pas un rectangle !");
	else if (check_wall_lines(game) == 0)
		error_msg("Erreur, la map  n'est pas fermer sur l'axe vertical!");
	else if (check_wall_columns(game) == 0)
		error_msg("Erreur, la map n'est pas fermer sur l'axe horizontal! ");
	check_map_parameters(game);
}

//fonction permettant de verifier les conditions de la structure de la map 
//si la map est bien rectangulaire et au'elle est entoure de murs.
