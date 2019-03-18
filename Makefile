# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdamion- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/29 14:13:15 by gdamion-          #+#    #+#              #
#    Updated: 2019/03/18 10:09:05 by gdamion-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

SRC = $(addsuffix .c,c_handle d_i_handle o_handle o_handle2 p_handle \
					proc_handle f_handle f_handle2 s_handle u_handle \
					x_handle ft_itoa_long printf ulong_init)
SRC_DIR = src/

LIB_DIR = lib/

OBJ = $(patsubst %.c,%.o,$(SRC))
OBJ_DIR = obj/

HEADER_DIR = includes/

FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@gcc -c $< -o $@ -I $(HEADER_DIR)

$(NAME): $(addprefix $(OBJ_DIR),$(OBJ))
	@make bin_compile -C $(LIB_DIR)
	@ar rcs $(NAME) $(addprefix $(OBJ_DIR),$(OBJ)) $(LIB_DIR)$(OBJ_DIR)*.o

clean:
	@make clean -C $(LIB_DIR)
	@rm -Rf $(OBJ_DIR)

fclean: clean
	@make fclean -C $(LIB_DIR)
	@rm -f $(NAME);

re: fclean all
