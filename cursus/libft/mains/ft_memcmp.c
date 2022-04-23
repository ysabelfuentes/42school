/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:09:41 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/23 15:53:13 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	char s1[] = "42cadet";
	char s2[] = "42cadetabc";
	printf("%d\n", ft_memcmp(s1, s2, 3));
    printf("%d\n", ft_memcmp(s1, s2, 8));
	printf("%d\n", ft_memcmp(s2, s1, 8));

	return (0);
}