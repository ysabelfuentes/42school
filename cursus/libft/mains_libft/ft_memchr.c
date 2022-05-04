/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 14:38:31 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/23 15:52:34 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	char s1[] = "hola mundo";
    printf("%lu\n", ft_strlen(s1));
	char* ptr = ft_memchr(s1, 'u', 4);
	printf("%s\n", ptr);
	char* ptr1 = ft_memchr(s1, 'u', 10);
	printf("%s\n", ptr1);
	return (0);
}
