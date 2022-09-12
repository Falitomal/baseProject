# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jledesma <jledesma@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 21:04:41 by jledesma          #+#    #+#              #
#    Updated: 2022/09/09 18:48:02 by jledesma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = name
PROGRAMC = name

SRC_NAME = 	NAME.c
OBJ_NAME = ${SRC_NAME:.c=.o}
OBJ = ${:.c=.o}

#BONUS
SRC_BONUS =
OBJ_BONUS = ${SRC_BONUS:.c=.o}

#LIBFT PLUS
SRC_PRINTF = Libft_plus
LIBFPRINTF = Libft_plus/libft.a

#Renders
#INCLUDES	= -I include -I MLX42/include/MLX42
#LIBS		= MLX42/libmlx42.a -lglfw -L /Users/${USER}/.brew/opt/glfw/lib/

CC = gcc
CFLAGS = -Wall -Werror -Wextra
COLOR_DONE = \033[47m\033[1;32m
NORMI = norminette .

all:  $(LIBFPRINTF) $(PROGRAMC)


$(PROGRAMC): $(OBJ_NAME)
	@$(CC) $(CFLAGS) $(LIBFPRINTF) ${LIBS} ${INCLUDES}  -o $@ $(OBJ_NAME)
	@echo "$(COLOR_DONE)----NAME DONE----\n"

%.o: %.c
	@ ${CC} ${CFLAGS} -o $@ -c $< ${INCLUDES}

${LIBFPRINTF}:
			@norminette .
			@clear
			@echo "$(COLOR_DONE)\n\---NORMINETTE CORRECT\n"
			@$(MAKE) -C $(SRC_PRINTF) 
			@echo "$(COLOR_DONE)----DONE PRINTF----\n"
clean:
			@ $(MAKE) clean -sC $(SRC_PRINTF)
			@echo "$(COLOR_DONE)----CLEAN PRINTF-----\n"
			@rm	-rf $(OBJ_SERVER) $(OBJ_PROGRAMC)
			@echo "$(COLOR_DONE)----CLEAN SERVER&PROGRAMC----\n"
			
fclean:	clean
			@ $(MAKE) fclean -sC $(SRC_PRINTF)
			@echo "$(COLOR_DONE)----FORCE CLEAN LIBFTPRINTF----\n"
			@rm -rf $(PROGRAMC) $(SERVER)
			@echo "$(COLOR_DONE)----FORCE CLEAN----\n"
bonus:

re: fclean all
			@echo "$(COLOR_DONE)----FORCE REBUILD----\n"

normi:
	@norminette .
.PHONY: all clean re fclean 