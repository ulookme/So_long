/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_for_invalid_map_parameters.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:29:35 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/22 10:43:40 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	check_for_invalid_map_parameters(char *str)
{
	int	param;

	param = 0;
	while ((str[param]) && ft_isprint(str[param]) == 1)
	{
		if ((str[param] == WALL)
			|| (str[param] == FLOOR)
			|| (str[param] == BONUS)
			|| (str[param] == PLAYER)
			|| (str[param] == EXIT))
			param++;
		else
			return (1);
	}
	return (0);
}

//une fonction booleene renvoyant 1 si la map contient des 1, des 0, des P
//,des C ou des E. Renvoie 0 si elle trouve
//une autre lettre ou un autre chiffre par exemple. 
