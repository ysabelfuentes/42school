/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:36:37 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/23 16:00:35 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
