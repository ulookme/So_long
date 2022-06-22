/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:45:01 by chajjar           #+#    #+#             */
/*   Updated: 2022/06/22 12:21:46 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include "./Libft/libft.h"

# include <mlx.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/stat.h>
# include <fcntl.h>

//COLORS

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
//MACROS

# define PLAYER 'P'
# define WALL '1'
# define FLOOR '0'
# define EXIT 'E'
# define BONUS 'C'

//--------------------------
// VARIABLES

# define WIDTH game->map.columns * 100
# define HEIGTH game->map.lines * 100

//---------------------------
//STRUCTURES

typedef struct s_vector
{
	int	x;
	int	y;
}	t_vector;

typedef struct s_vector3
{
	int	x;
	int	y;
	int	z;
}	t_vector3;

typedef struct s_image
{
	void		*img_ptr;
	t_vector	size;
}				t_image;

typedef struct s_map
{
	char		**tab;
	int			lines;
	int			columns;
	int			bonus;
	int			exit;
	int			nb_player;
	t_vector	player_p;
}	t_map;

typedef struct s_game
{
	void		*mlx_ptr;
	void		*win_ptr;
	int			movements;
	t_map		map;
	t_image		wall;
	t_image		player;
	t_image		player2;
	t_image		bonus;
	t_image		bonus2;
	t_image		exit;
	t_image		floor;
}	t_game;

//--------------------------------
//FONCTIONS
void	init_vars(t_game *game);
void	check_file_map(int argc, char **argv);
void	init_map(t_game *game, char *argv);
size_t	ft_new_strlen(const char *s);
int		check_wall_columns(t_game *game);
int		check_wall_lines(t_game *game);
int		check_lenth_map(t_game *game);
void	check_size_map(t_game *game);
void	error_msg(char *message);
void	check_map_parameters(t_game *game);
int		check_for_invalid_map_parameters(char *str);
int		count_char(char *str, char c);
void	init_player_position(t_game *game, char *line, int y);
int		ft_close(void);
int		init_game(t_game *game);
void	render_background(t_game *game);
void	print_map(t_game *game);
int		ft_input(int key, void *param);
void	ft_left(t_game *game, int key);
void	ft_right(t_game *game, int key);
void	ft_up(t_game *game, int key);
void	ft_down(t_game *game, int key);
void	ft_esc(t_game *game, int key);
void	harvest_bonus(t_game *game);
void	win_msg(char *message);
void	victory(t_game *game);
void	put_image(t_game *game);
void	print_new_exit(t_game *game);
int		ft_close(void);
int		render_hook(t_game *game);
void	render_animation(t_game *game, void *img, void *img2, t_vector3 pos);

#endif
