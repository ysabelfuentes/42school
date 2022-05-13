/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:09:09 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/13 17:15:25 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int	main(void)
{
	int		fd;
	char	*line;
	
    fd = 1;
	//fd = open("file_test/1char.txt", O_RDONLY);
	//fd = open("file_test/empty.txt", O_RDONLY);
	//fd = open("file_test/only_nl.txt", O_RDONLY);
	//fd = open("file_test/one_line_no_nl.txt", O_RDONLY);
	//fd = open("file_test/variable_nls.txt", O_RDONLY);
	//fd = open("file_test/multiple_nl.txt", O_RDONLY);
	fd = open("file_test/lines_around_10.txt", O_RDONLY);
	//fd = open("file_test/giant_line.txt", O_RDONLY);
	//fd = open("file_test/giant_line_nl.txt", O_RDONLY);
	if (fd == -1)
	{
		write(1, "No existe archivo\n", 18);
		return (-1);
	}
	line = get_next_line(fd);
	while (line)
	{
		write(1, line, ft_strlen(line));
		free(line);
		line = get_next_line(fd);
	}
	system("leaks a.out");
}
