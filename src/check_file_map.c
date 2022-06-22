/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:06:24 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/22 12:22:51 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_file_map(int argc, char **argv)
{
	int	len_file_name;

	if (argc > 2)
		error_msg("erreur, contient plus de 1 fichiers !");
	if (argc < 2)
		error_msg("erreur, aucun fichier transmis");
	len_file_name = ft_strlen(argv[1]);
	if (!ft_strnstr(&argv[1][len_file_name - 4], ".ber", 4))
		error_msg("le fichier le contient pas l'extention .ber");
}
