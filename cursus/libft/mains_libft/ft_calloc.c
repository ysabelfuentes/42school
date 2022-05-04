/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 10:55:27 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/25 11:38:09 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int *ptr1;
    int i;
    ptr1 = (int *)ft_calloc(5, sizeof(int));
	i = 0;
    while(i < 5)
    {
        printf("valor puntero %d \n",ptr1[i]);
        i++;
    }
    free(ptr1);
	return (0);
}
