/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:15:02 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/03 13:02:09 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_minlen(size_t a, size_t b)
{
	if (a > b)
	{
		return (b);
	}
	return (a);
}

/* Returns a substring of the string 's'.
It starts from the 'start' index and has a maximum length of 'len'.
Returns NULL if memory allocation fails.*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str_tmp;
	size_t	i;
	size_t	len_str;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	len_str = ft_minlen(ft_strlen(s), len);
	str_tmp = (char *)malloc((len_str + 1) * sizeof(char));
	if (!str_tmp)
		return (0);
	while (i < len_str)
	{
		str_tmp[i] = s[start];
		i++;
		start++;
	}
	str_tmp[i] = '\0';
	return (str_tmp);
}
