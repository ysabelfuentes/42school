/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:09:41 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/25 12:58:06 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char *s1 = "atoms\0\0\0\0";
 	char *s2 = "atoms\0abc";
	//char s1[] = "42cadet";
	//char s2[] = "42cadetabc";
	printf("orig %d\n", memcmp(s1, s2, 3));
	printf("%d\n", ft_memcmp(s1, s2, 3));
	printf("orig %d\n", memcmp(s1, s2, 8));
    printf("%d\n", ft_memcmp(s1, s2, 8));
	printf("orig %d\n", memcmp(s2, s1, 8));
	printf("%d\n", ft_memcmp(s2, s1, 8));
	
	char *str1 = "\xff\0\0\xaa\0\xde\xffMACOSX\xff";
 	char *str2 = "\xff\0\0\xaa\0\xde\x00MBS";
	printf("orig %d\n", memcmp(str1, str2, 9));
	printf("%d\n", ft_memcmp(str1, str2, 9));

	return (0);
}