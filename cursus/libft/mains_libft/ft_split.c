/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:19:52 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/03 14:24:21 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char c;
	size_t pos;
	char **res;
	char t[] = "  split this   for    me ! ";
	c = ' ';
	pos = 0;
	res = ft_split(t, c);
	while (pos <= ft_count_cad(t, c))
	{
		printf("posicion: (%zu) = substring: %s\n", pos, res[pos]);
		pos++;
	}
	free(res);
	return (0);
}


//PRIMERA VERSION DE HACER SIN LIBERAR MEMORIA

static int	ft_count_cad(char const *s, char c)
{
	size_t	i;
	int		count;
	int		flag;

	i = 0;
	count = 0;
	flag = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c)
			flag = 1;
		if ((s[i] == c || s[i + 1] == '\0') && flag == 1)
		{
			flag = 0;
			count++;
		}
		i++;
	}
	return (count);
}

static char	*ft_get_substring(char const *s, char c, int start, size_t *x)
{
	int	count;

	count = 0;
	s += start;
	while (s[count] != c && s[count] != '\0')
		count++;
	*x = count;
	return (ft_substr(s - start, start, count));
}

char	**ft_split(char const *s, char c)
{
	char	**str_split;
	int		count_split;
	size_t	x;
	size_t	i;

	if (!s)
		return (0);
	count_split = 0;
	str_split = (char **)malloc(sizeof(char *) * ft_count_cad(s, c) + 1);
	if (!str_split)
		return (0);
	i = 0;
	while (i < ft_strlen(s) || s[i] != '\0')
	{
		if (s[i] != c)
		{
			str_split[count_split] = ft_get_substring(s, c, i, &x);
			i += x;
			count_split++;
		}
		else
			i++;
	}
	str_split[count_split] = NULL;
	return (str_split);
}


//SEGUNDA VERSION LIBERANDO MEMORIA - SON 4 FUNCIONES PORQUE ME DA PARA LA FT_SPLIT MAS DE 25 LINEAS

char	*ft_clear_splitted(char **str_split)
{
	unsigned int	i;

	i = 0;
	while (str_split[i])
	{
		free(str_split[i]);
		i++;
	}
	free(str_split);
	return (NULL);
}

static int	ft_count_cad(char const *s, char c)
{
	size_t	i;
	int		count;
	int		flag;

	i = 0;
	count = 0;
	flag = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c)
			flag = 1;
		if ((s[i] == c || s[i + 1] == '\0') && flag == 1)
		{
			flag = 0;
			count++;
		}
		i++;
	}
	return (count);
}

static char	*ft_get_substring(char const *s, char c, int start, size_t *end)
{
	int	count;

	count = 0;
	s += start;
	while (s[count] != c && s[count] != '\0')
		count++;
	*end = count;
	return (ft_substr(s - start, start, count));
}

static char	*ft_split2(char **str_split, char const *s, char c, size_t *start)
{
	size_t	end;
	char	*str_sub;

	str_sub = ft_get_substring(s, c, *start, &end);
	if (!str_sub)
		return(ft_clear_splitted(str_split));
	*start += end;
	return (str_sub);
}

char	**ft_split(char const *s, char c)
{
	char	**str_split;
	int		count_split;
	size_t	start;

	if (!s)
		return (0);
	count_split = 0;
	str_split = (char **)malloc(sizeof(char *) * ft_count_cad(s, c) + 1);
	if (!str_split)
		return (0);
	start = 0;
	while (start < ft_strlen(s) || s[start] != '\0')
	{
		if (s[start] != c)
			str_split[count_split++] = ft_split2(str_split, s, c, &start);
		else
			start++;
	}
	str_split[count_split] = NULL;
	return (str_split);
}
