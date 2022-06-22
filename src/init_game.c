/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:18:31 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/21 17:46:20 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	init_game(t_game *game)
{
	game->mlx_ptr = mlx_init();
	if (game->mlx_ptr == NULL)
		error_msg("pointeur mlx introuvable");
	game->win_ptr = mlx_new_window(game->mlx_ptr, WIDTH, HEIGTH, "so_long");
	if (game->win_ptr == NULL)
		error_msg("erreur ! fenetre introuvable!");
	game->wall.img_ptr = mlx_xpm_file_to_image(game->mlx_ptr, \
"asset_solong/wall.xpm", &game->wall.size.x, &game->wall.size.y);
	game->floor.img_ptr = mlx_xpm_file_to_image(game->mlx_ptr, \
"asset_solong/floor.xpm", &game->floor.size.x, &game->floor.size.y);
	game->bonus.img_ptr = mlx_xpm_file_to_image(game->mlx_ptr, \
"asset_solong/bonus.xpm", &game->bonus.size.x, &game->bonus.size.y);
	game->bonus2.img_ptr = mlx_xpm_file_to_image(game->mlx_ptr, \
"asset_solong/bonus2.xpm", &game->bonus.size.x, &game->bonus.size.y);
	game->exit.img_ptr = mlx_xpm_file_to_image(game->mlx_ptr, \
"asset_solong/terre2.xpm", &game->exit.size.x, &game->exit.size.y);
	game->player.img_ptr = mlx_xpm_file_to_image(game->mlx_ptr, \
"asset_solong/iceky.xpm", &game->player.size.x, &game->player.size.y);
	game->player2.img_ptr = mlx_xpm_file_to_image(game->mlx_ptr, \
"asset_solong/icesky2.xpm", &game->player.size.x, &game->player.size.y);
	mlx_hook(game->win_ptr, 17, 0, ft_close, 0);
	return (0);
}

//Cette fonction permet d'initialiser les principaux pointeurs qu'on va
//utiliser dans la plupart des autres fonctions de la minilibX , j'initialise
//aussi toutes les textures pour chaque image de mon jeu (murs, personnage,
//collectible, sortie ainsi que le sol.)
