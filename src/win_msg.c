/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   win_msg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:43:36 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/21 15:43:43 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	win_msg(char *message)
{
	ft_printf(GREEN"%s\n", message);
	exit (0);
}

//fonction renvoyant le message de victoire
