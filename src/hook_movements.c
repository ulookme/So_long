/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_movements.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:33:08 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/22 10:48:46 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_right(t_game *game, int key)
{
	if (key == 124 || key == 2)
	{
		if ((game->map.tab[game->map.player_p.y / 100] \
			[game->map.player_p.x / 100 + 1] == FLOOR)
			|| (game->map.tab[game->map.player_p.y / 100] \
			[game->map.player_p.x / 100 + 1] == PLAYER)
			|| (game->map.tab[game->map.player_p.y / 100] \
			[game->map.player_p.x / 100 + 1] == BONUS)
			|| (game->map.tab[game->map.player_p.y / 100] \
				[game->map.player_p.x / 100 + 1] == EXIT && \
				game->map.bonus == 0))
		{
			game->map.player_p.x += 100;
			game->movements += 1 ;
		}
	}
}

void	ft_left(t_game *game, int key)
{
	if (key == 123 || key == 0)
	{
		if ((game->map.tab[game->map.player_p.y / 100] \
			[game->map.player_p.x / 100 - 1] == FLOOR)
			|| (game->map.tab[game->map.player_p.y / 100] \
			[game->map.player_p.x / 100 - 1] == PLAYER)
			|| (game->map.tab[game->map.player_p.y / 100] \
			[game->map.player_p.x / 100 - 1] == BONUS)
			|| (game->map.tab[game->map.player_p.y / 100] \
			[game->map.player_p.x / 100 - 1] == EXIT && \
			game->map.bonus == 0))
		{
			game->map.player_p.x -= 100;
			game->movements += 1;
		}
	}
}

void	ft_up(t_game *game, int key)
{
	if (key == 126 || key == 13)
	{
		if ((game->map.tab[game->map.player_p.y / 100 - 1] \
			[game->map.player_p.x / 100] == FLOOR)
			|| (game->map.tab[game->map.player_p.y / 100 - 1] \
			[game->map.player_p.x / 100] == PLAYER)
			|| (game->map.tab[game->map.player_p.y / 100 - 1] \
			[game->map.player_p.x / 100] == BONUS)
			|| (game->map.tab[game->map.player_p.y / 100 - 1] \
				[game->map.player_p.x / 100] == EXIT && \
				game->map.bonus == 0))
		{
			game->map.player_p.y -= 100;
			game->movements += 1;
		}
	}
}

void	ft_down(t_game *game, int key)
{
	if (key == 125 || key == 1)
	{
		if ((game->map.tab[game->map.player_p.y / 100 + 1] \
			[game->map.player_p.x / 100] == FLOOR)
			|| (game->map.tab[game->map.player_p.y / 100 + 1] \
			[game->map.player_p.x / 100] == PLAYER)
			|| (game->map.tab[game->map.player_p.y / 100 + 1] \
			[game->map.player_p.x / 100] == BONUS)
			|| (game->map.tab[game->map.player_p.y / 100 + 1] \
				[game->map.player_p.x / 100] == EXIT && \
				game->map.bonus == 0))
		{
			game->map.player_p.y += 100;
			game->movements += 1;
		}
	}
}

void	ft_esc(t_game *game, int key)
{
	if (key == 53)
	{
		mlx_destroy_window(game->mlx_ptr, game->win_ptr);
		exit (0);
	}
}

// les 4 premieres fonctions me permettent de deplacer 
//mon joueur si il trouve dans la position 
// suivante ou il va se diriger un '0', un 'P', un 'C' ou un 'E'
// (seulement si il n'y a plus de collectibles) 
// ainsi je peux gerer les colisions avec les murs 
// la derniere fonction ferme la fenetre en appuyant sur le bouton echap. 
