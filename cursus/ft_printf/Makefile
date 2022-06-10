# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/19 13:07:11 by yfuentes          #+#    #+#              #
#    Updated: 2022/05/20 11:15:07 by yfuentes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf_char.c \
	ft_printf_string.c \
	ft_printf_pointer.c \
	ft_printf_integer.c \
	ft_printf_unsigned.c \
	ft_printf_hex.c \
	ft_printf_percent.c \
	ft_printf.c

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
OBJS = $(SRCS:.c=.o)

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re