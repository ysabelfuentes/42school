# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+         #
#                                                +#+#+#+#+#+   +#+            #
#    Created: 2022/04/07 10:52:44 by lagarcia          #+#    #+#              #
#    Updated: 2022/04/07 10:53:33 by yfuentes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := gcc
TARGET = bsq
OBJS = main.o
FLAGS = -Wall -Wextra -Werror 

all:	$(TARGET)

$(TARGET): $(OBJS)
		@$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o : %.c
	@$(CC) -c $(FLAGS) $< -o $@

.PHONY:	fclean clean re all
clean:
	@rm -f $(OBJS)

fclean:	clean
	@rm -f $(TARGET)

re:	fclean all