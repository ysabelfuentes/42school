/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslopez <joslopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 15:59:50 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/03 18:46:23 by joslopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_strlen(char *str)
{
	int	cad;

	cad = 0;
	while (str[cad] != '\0')
	{
		cad++;
	}
	return (cad);
}

char	*ft_read_word(int fd, char buffer)
{
	char	*str;
	int		j;

	while (buffer == ' ' || buffer == ':')
	{
		read(fd, &buffer, 1);
	}
	j = 0;
	str = (char *)malloc(sizeof(char) * 100);
	if (!(str))
	{
		write(1, "Created str error\n", 13);
	}
	while (buffer != '\n')
	{
		str[j] = buffer;
		j++;
		read(fd, &buffer, 1);
	}
	str[j] = '\0';
	return (str);
}

void	ft_read_file(char *arg, char *file)
{
	int		fd;
	char	buffer;
	int		flags;
	char	*str;

	flags = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		write(1, "Open file error\n", 13);
	while (read(fd, &buffer, 1))
	{
		if (buffer == arg[0])
		{
			flags = 1;
			if (flags == 1)
			{
				read(fd, &buffer, 1);
				str = ft_read_word(fd, buffer);
				write(1, str, ft_strlen(str));
				free(str);
				break ;
			}
		}
	}
	close(fd);
}

int	openfile_diff(char *file, char *arg)
{
	int	i;

	i = 0;
	if (arg[i] == '\0')
	{
		write(1, "Error arg[1] empty\n", 13);
		return (1);
	}
	i = 0;
	while (arg[i] != '\0')
	{
		if (arg[i] < '0' || arg[i] > '9')
		{
			write(1, "Numeric error\n", 15);
			return (1);
		}
		i++;
	}
	ft_read_file(arg, file);
	return (0);
}

int	openfile_init(char *file, char *arg)
{
	int	i;

	i = 0;
	if (arg[i] == '\0')
	{
		write(1, "Error arg[1] empty\n", 13);
		return (1);
	}
	while (arg[i] != '\0')
	{
		if (arg[i] < '0' || arg[i] > '9')
		{
			write(1, "Numeric error\n", 15);
			return (1);
		}
		i++;
	}
	ft_read_file(arg, file);
	return (0);
}
