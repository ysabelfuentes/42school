/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:36:37 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/21 17:53:03 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*char_dst;
	char	*char_src;
	size_t	i;

	i = 0;
	char_dst = (char *)dst;
	char_src = (char *)src;
	if (dst == src)
		return (dst);
	while (i < n)
	{
		char_dst[i] = char_src[i];
		i++;
	}
	char_dst[i] = '\0';
	return (dst);
}
