/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 11:41:35 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/02 11:19:21 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Locates the last occurrence of c in the string pointed to by s. 
The terminating null character is considered to be part of the string.
Returns a pointer to the located character, or null if it does not exist.*/
char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	pos_c;

	pos_c = ft_strlen(s);
	i = ft_strlen(s);
	while (i >= 0)
	{
		if ((unsigned char)c == s[i])
			return ((char *)s + i);
		i--;
	}
	if ((unsigned char)c == s[i])
		return ((char *)s + pos_c);
	return (0);
}
