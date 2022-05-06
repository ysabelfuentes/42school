/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:30:46 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/06 17:03:06 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	cad;

	cad = 0;
	while (str[cad] != '\0')
	{
		write(1, &str[cad], 1);
		cad++;
	}
}

char	*get_next_line(int fd)
{
	int		iter;
	char	buf[BUFFER_SIZE + 1];

	//char	*str_tmp;
	/*str_tmp = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!str_tmp)
		return (0);
    */
	//iter = read(int fildes, void *buf, size_t nbyte);
	iter = read(fd, buf, BUFFER_SIZE);
	while (iter)
	{
		//ft_putstr(char *str);
		printf("iter: %d\n", iter);
		printf("texto: %s\n", buf);
		iter = read(fd, buf, BUFFER_SIZE);
	}
	return (NULL);
}

int	main(void)
{
	char	*file = "readme.txt";
	int		fd;

	fd = open(file, O_RDONLY);
	get_next_line(fd);
	close(fd);
	return (0);
}
