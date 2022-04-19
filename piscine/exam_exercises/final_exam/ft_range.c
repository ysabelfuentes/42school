/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:55:03 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/07 19:29:33 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	*ft_range(int start, int end)
{
	int	cont_lenght;
	int	*array;
	int	i;

	cont_lenght = 0;
	while (start <= end)
	{
		cont_lenght++;
	}
	array = (int *)malloc(sizeof(int) * cont_lenght);
	if (!(array))
	{
		write(1, "error", 5);
		return (0);
	}
	else
	{
		i = 0;
		while (i < end)
		{
			array[i] = start + i;
			i++;
		}
		return (array);
	}
}

int	main(void)
{
	int	*tab;
	int	i;
	int	j;

	tab = ft_range(1, 3);
	i = 0;
	j = 1;
	while (j <= 3)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}
