# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chajjar <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 14:21:46 by chajjar           #+#    #+#              #
#    Updated: 2022/06/21 16:33:47 by chajjar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

ARGS = map/map_i.ber

SRC = src/init_var.c src/so_long.c \
	  src/init_map.c src/check_file_map.c\
	  src/check_size_map.c src/ft_new_strlen.c\
	  src/error_msg.c src/check_for_invalid_map_parameters.c\
	  src/count_char.c src/init_player_position.c\
	  src/check_map_parameters.c src/ft_close.c\
	  src/init_game.c src/render_background.c\
	  src/print_map.c src/ft_input.c\
	  src/put_image.c src/hook_movements.c\
	  src/harvest_bonus.c src/victory.c\
	  src/win_msg.c src/print_new_exit.c\
		


OBJ = $(SRC:.c=.o)
LIBFT_DIR = libft/
LIBFT_A = libft.a
LIBFT = $(addprefix $(LIBFT_DIR), $(LIBFT_A))

FLAGS = -Wall -Wextra -Werror -g3
LINKS = -lmlx -framework OpenGL -framework AppKit
DANGER = -fsanitize=address

NONE='\033[0m'
GREEN='\033[32m'
GRAY='\033[2;37m'
RED = '\033[31m'
CURSIVE='\033[3m'

all: $(NAME)

.c.o:
	@gcc $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	@echo $(CURSIVE)$(GRAY)"  -Making Libft..." $(NONE)
	@make -C $(LIBFT_DIR)
	@echo $(CURSIVE)$(GRAY)" -Making so_long...." $(NONE)
	gcc $(DANGER) $(OBJ) $(LIBFT) $(LINKS) -o $(NAME)
	@echo "$(NAME): $(GREEN)$(NAME) was created$(NONE)"

clean:
	@echo $(CURSIVE)$(GRAY) " -deleting objects..."$(NONE)
	@rm -rf $(OBJ)
	@echo "$(RED) objects was deleted$(NONE)"
	@make -C $(LIBFT_DIR) clean

fclean: clean
	@echo $(CURSIVE)$(GRAY) " -deleting $(NAME)..."$(NONE)
	@rm -rf $(NAME)
	@echo "$(NAME): $(RED)$(NAME) was deleted$(NONE)"
	@make -C $(LIBFT_DIR) fclean

re: fclean all

test: all
	@./$(NAME) $(ARGS)

.PHONY: all clean fclean re test
