/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 11:03:56 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/23 15:57:33 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	//char s1[30] = "pen pineapple apple pen!";
	char s1[30] = "hola";
	char* ptr = ft_strnstr(s1, "ol", 4);
	printf("%s\n", ptr);
	char* ptr1 = ft_strnstr(s1, "o", 2);
	printf("%s\n", ptr1);
	char* ptr2 = ft_strnstr(s1, "hot ", 2);
	printf("%s\n", ptr2);

	return (0);
}
