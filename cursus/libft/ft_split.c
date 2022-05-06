/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:19:52 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/06 13:26:30 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	int		count;
	int		flag;

	i = 0;
	count = 0;
	flag = 0;
	while (i < ft_strlen(s))
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

static size_t	ft_count_substring(char const *s, char c, size_t start)
{
	size_t	count;

	count = 0;
	s += start;
	while (s[count] != c && s[count] != '\0')
		count++;
	return (count);
}

static char	*ft_get_substr(char **str_split, char const *s, char c, size_t *i)
{
	size_t	end;
	char	*str_sub;

	end = ft_count_substring(s, c, *i);
	str_sub = ft_substr(s, *i, end);
	if (!str_sub)
		return (ft_clear_splitted(str_split));
	*i += end;
	return (str_sub);
}

/*Returns an strings resulting from separating the string s into substrings 
using the character 'c' as delimiter. The array must end with a NULL pointer.
Returns NULL if memory allocation fails.*/
char	**ft_split(char const *s, char c)
{
	char	**str_split;
	char	*str_tmp;
	int		count_split;
	size_t	start;

	if (!s)
		return (0);
	str_split = (char **)malloc(sizeof(char *) * ft_count_words(s, c) + 1);
	if (!str_split)
		return (0);
	start = 0;
	count_split = 0;
	while (start < ft_strlen(s) || s[start] != '\0')
	{
		if (s[start] != c)
		{
			str_tmp = ft_get_substr(str_split, s, c, &start);
			if (!str_tmp)
				return (0);
			str_split[count_split++] = str_tmp;
		}
		else
			start++;
	}
	str_split[count_split] = NULL;
	return (str_split);
}
