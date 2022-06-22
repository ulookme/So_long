/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:22:38 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/21 17:47:30 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	render_hook(t_game *game)
{
	mlx_clear_window(game->mlx_ptr, game->win_ptr);
	mlx_string_put(game->mlx_ptr, game->win_ptr, 50, 50, \
	0xfffafa, ft_itoa(game->movements));
	put_image(game);
	return (0);
}

int	ft_input(int key, void *param)
{
	t_game	*game;

	game = (t_game *)param;
	ft_left(game, key);
	ft_right(game, key);
	ft_up(game, key);
	ft_down(game, key);
	ft_esc(game, key);
	printf(" nbre de mouvements -> %d\n", game->movements);
	harvest_bonus(game);
	print_new_exit(game);
	victory(game);
	return (0);
}

//fonction regroupqnt toutes fonctions servant au gameplay du jeu. 
//bouger le personnage, gerer les colisions, recuperer les collectibles 
//fermer le jeu correctement, condition de victoire
