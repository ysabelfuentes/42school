/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:30:46 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/09 18:43:37 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static size_t	ft_strlen_line(const char *s, char *pos_ln)
{
	size_t	count;

	count = 0;
	while (s != pos_ln)
	{
		s++;
		count++;
	}
	return (count);
}
/*
//funcion que retorna la primera posicion del caracter \n en el string
static int	get_line_to_ln(char *str, char *buf, char c)
{
	char	*pos_ln;
	char	*tmp;

	//printf("ENTRO\n");
	tmp = str;
	printf("ASIGNACON TMP = %s\n\n",tmp);
	str = ft_strjoin(tmp, buf);
	printf("STR CONCATENADO = %s\n\n", str);
	free(tmp);
	pos_ln = ft_strchr(str, c);
	printf("POSICION_LN PUNTERO: %s\n\n", pos_ln);
	if (!pos_ln)
		return(0);
	else
	{
		//str = ft_substr(str, pos_ln, ft_strlen(str));
		//return(ft_substr(str, 0, pos_ln));
		return(ft_strlen_line(str, pos_ln));
	}
}
*/
char	*get_next_line(int fd)
{
	ssize_t		iter;
	char		buf[BUFFER_SIZE + 1];
	static char	*str;
	char		*line;
	char		*pos_ln;
	int			pos;
	char		*tmp;

	if ((fd < 0) || (BUFFER_SIZE <= 0))
		return (NULL);
	iter = 1;
	if (!str)
		str = ft_calloc(sizeof(char), 1);
	while (!ft_strchr(str, '\n') && iter)
	{
		iter = read(fd, buf, BUFFER_SIZE);
		if (iter == -1)
			return (NULL);
		buf[iter] = '\0';
		tmp = str;
		str = ft_strjoin(str, buf);
		free(tmp);
	}
	pos_ln = ft_strchr(str, '\n');
	if (!pos_ln)
		pos = 0;
	else
		pos = ft_strlen_line(str, pos_ln);
	line = ft_substr(str, 0, pos + 1);
	tmp = str;
	str = ft_substr(tmp, pos, ft_strlen(tmp));
	free(tmp);
	if (iter == 0)
	{
		line = str;
		str = NULL;
	}
	return (line);
}

int	main(void)
{
	int		fd;
	char	*str;
	int		i;

	//fd = open("file_test/1char.txt", O_RDONLY);
	//fd = open("file_test/empty.txt", O_RDONLY);
	//fd = open("file_test/one_line_no_nl.txt", O_RDONLY);
	//fd = open("file_test/multiple_nl.txt", O_RDONLY);
	//fd = open("file_test/variable_nls.txt", O_RDONLY);
	//fd = open("file_test/only_nl.txt", O_RDONLY);
	//fd = open("file_test/lines_around_10.txt", O_RDONLY);
	//fd = open("file_test/giant_line.txt", O_RDONLY);
	//fd = open("file_test/giant_line_nl.txt", O_RDONLY);
	fd = open("file_test/texto.txt", O_RDONLY);
	//fd = open("file_test/texto1.txt", O_RDONLY);
	if (fd == -1)
		printf("Error al abrir el archivo \n");
	else
	{
		i = 1;
		while (i)
		{
			str = get_next_line(fd);
			if (*str == '\0')
				break ;
			printf("linea = %d - texto = %s\n\n", i, str);
			free(str);
			i++;
		}
		close(fd);
	}
	return (0);
}
