/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:57:23 by lagarcia          #+#    #+#             */
/*   Updated: 2022/04/07 11:42:46 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Aunque no lo hayamos resuelto,
hemos aprovechado para dejaros un mensaje.
¡Muchas gracias! Ahora, it's up to you! */

#include "bsq.h"

void	ft_read_file(char *file)
{
	int		fd;
	char	buffer;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error\n", 6);
		return ;
	}
	while (read(fd, &buffer, 1))
	{
		write(1, &buffer, 1);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	ft_read_file("uptoyou42.txt");
	write(1, "\n", 1);
	return (0);
}
