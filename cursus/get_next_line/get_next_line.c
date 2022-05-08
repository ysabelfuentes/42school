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

//funcion que retorna la primera posicion del caracter \n en el string
static int get_line_to_ln(char *str, char * buf, char c)
{
	char *pos_ln;
	char *tmp;

	tmp = str;
	str = ft_strjoin(tmp, buf);
	free(tmp);
	pos_ln = ft_strchr(str, c);
	if (!pos_ln) 
		return(0);
	else
	{
		//str = ft_substr(str, pos_ln, ft_strlen(str));
		//return(ft_substr(str, 0, pos_ln));
		return(ft_strlen_line(str, pos_ln));
	}
}

char	*get_next_line(int fd)
{
	ssize_t		iter;
	char	buf[BUFFER_SIZE + 1];
	static char	*str;
	char *line;
	int pos_ln;
	char *tmp;
	static int j;

	j = 1;
	if(fd == -1 || BUFFER_SIZE <= 0)
		return(NULL);
	iter = 1;
	while (iter)
	{
		
		iter = read(fd, buf, BUFFER_SIZE);
		buf[iter] = '\0';
		if(iter == -1)
			return(NULL);
		pos_ln = get_line_to_ln(str, buf, '\n');
		if(pos_ln != 0)
			iter = 0;
		/*str_tmp = (char *)buf;
		//str_tmp[iter] = '\0';
		//printf("ITER: %d\n", iter);
		//printf("TEXTO: %s\n", str_tmp);
		if(iter == 0)
		{
			printf("Adentro: Archivo vacio o fin de archivo \n");
			return (0);
		}
		else
		{
			str_tmp = get_line_to_ln(str_tpm, buf, '\n');
			return (str_tmp);
		}*/
	}
	line = ft_substr(str, 0, pos_ln);
	printf("linea = %d - texto = %s\n",j,line);
	j++;
	tmp = str;
	str = ft_substr(tmp, pos_ln, ft_strlen(tmp));
	free(tmp);
	return(line);
}

int	main(void)
{
	int		fd;
	char *str;
	int fin;
	int i;

	fd = open("texto.txt", O_RDONLY);
	if(fd == -1)
		printf("Error al abrir el archivo \n");
	else
	{
		fin = 1;
		i = 1;
		while(fin)
		{
			printf("linea = %d\n",i);
			str = get_next_line(fd);
			if(!str)
				fin = 0;
			//printf("linea = %d - texto = %s\n",i,str);
			i++;
			free(str);
		}
		if (fin == 0)
			printf("Afuera: Archivo vacio o fin de archivo \n");
		close(fd);
	}
	return (0);
}
