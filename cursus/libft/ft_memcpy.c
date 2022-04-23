/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:36:37 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/23 17:19:42 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "memcpy test!";
	char	str1[30];
	char	str2[30];

	printf("str: %s\n", str);
	ft_memcpy(str1, str, ft_strlen(str) + 1);
	printf("str1 : %s\n", str1);
	ft_memcpy(str2, "copy", 5);
	printf("str2: %s\n", str2);
	return (0);
}
