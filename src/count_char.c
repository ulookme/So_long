/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:38:12 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/22 10:46:29 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	count_char(char *str, char c)
{
	int	x;
	int	count;

	x = 0;
	count = 0;
	while (str[x] != '\0' && ft_isprint(str[x]) != 0)
	{
		if (str[x] == c)
			count++;
		x++;
	}
	return (count);
}

//Cette fonction me permet de recuper un nbre
//de caractere trouve dans une chaine de caractere,
//ce qui va me servir pour verifier les conditions des 
//nbres de Collectibles, de joueur ainsi que de sortie.
