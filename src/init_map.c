/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:41:41 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/22 13:22:19 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	init_map(t_game *game, char *argv)
{
	char	*read_str;
	char	*temp;
	int		map_fd;
	int		i;

	i = 0;
	map_fd = open(argv, O_RDONLY);
	if (map_fd == -1)
		error_msg("erreur d'ouverture map");
	read_str = get_next_line(map_fd);
	temp = ft_strdup("");
	while (read_str)
	{
		temp = ft_strjoin(temp, read_str);
		read_str = get_next_line(map_fd);
		i++;
	}
	close(map_fd);
	game->map.tab = ft_split(temp, '\n');
	game->map.lines = i;
	game->map.columns = ft_strlen(game->map.tab[0]);
}
