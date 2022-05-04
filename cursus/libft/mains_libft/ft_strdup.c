/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:39:15 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/25 12:03:21 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char cad[] = "programing";
    char * ptr1;
    ptr1 = ft_strdup(cad);
	printf("valor cadena original %s \n",cad);
    printf("valor cadena copiada %s \n",ptr1);
    free(ptr1);
	return (0);
}
