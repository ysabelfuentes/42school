/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 11:41:35 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/23 15:58:42 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	pos_c;

	pos_c = ft_strlen(s);
	i = ft_strlen(s);
	while (i > 0)
	{
		if ((unsigned char)c == s[i])
			return ((char *)s + i);
		i--;
	}
	if ((unsigned char)c == s[i])
		return ((char *)s + pos_c);
	return (0);
}
