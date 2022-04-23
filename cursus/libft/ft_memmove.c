/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:19:38 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/23 15:53:49 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*char_dst;
	unsigned char	*char_src;
	size_t			i;

	i = 0;
	char_dst = (unsigned char *)dst;
	char_src = (unsigned char *)src;
	if (dst > src)
		while (len--)
			char_dst[len] = char_src[len];
	else
		while (++i < len)
			char_dst[i] = char_src[i];
	return (dst);
}
