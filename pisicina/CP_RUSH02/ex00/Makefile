# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 12:05:26 by joblanco          #+#    #+#              #
#    Updated: 2022/04/03 16:12:59 by yfuentes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
OBJS = main.o print_number.o 
FLAGS = -Wall -Wextra -Werror 

$(NAME): $(OBJS)
	gcc $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.c
	gcc -c $(FLAGS) $< -o $@

.PHONY: fclean
fclean:
	@rm -f *.o $(NAME)
