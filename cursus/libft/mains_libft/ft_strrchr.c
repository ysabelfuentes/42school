/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 11:41:35 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/25 12:37:22 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	main(void)
{
	char *src = "abbbbbbbb";
	printf("con la funcion orginal %s", strrchr(src, 'a'));
	printf("\n");
	printf(" con ft_ %s", ft_strrchr(src, 'a'));
    printf("\n");
    char str[] = "hola lola to";
	printf("con la funcion orginal %s", strrchr(str, 'h'));
	printf("\n");
	printf(" con ft_ %s", ft_strrchr(str, 'h'));
    printf("\n");
	printf("%s", ft_strrchr(str, '\0'));
	return (0);
}