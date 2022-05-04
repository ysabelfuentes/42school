/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:19:38 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/23 15:53:33 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
    char    target[21] = "a shiny white sphere";
    char    *p;
    char    *src;
    p = target + 14;
    printf("Pointer p is :%s\n", p);
    src = target + 5;
    printf("Pointer source is :%s\n", src);
    printf("Before memmove target is :%s\n", target);
    ft_memmove(p, src, 9);
    printf("After memmove target becomes :%s\n", target);
}

/* int	main(void)
{
	char Like[10] = { "ILikeYou" };
	char Hate[10] = { "IHateYou" };
	//char Hate[10] = { "IHateYou" };
	char str[] = "12345678";
	
	printf("memmove before : %s\n", Like);
	ft_memmove(Like + 1, Hate + 1, 4);
	printf("memmove after : %s\n", Like);
	printf("memmove before : %s\n", str);
	ft_memmove(str + 3, str + 1, 3);
	printf("memmove after : %s\n", str);
	return (0);
}
 */