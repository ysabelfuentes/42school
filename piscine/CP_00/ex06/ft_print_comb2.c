/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 12:47:43 by jfuentes          #+#    #+#             */
/*   Updated: 2022/03/23 19:44:26 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	impresion(char i, char j)
{
	char	valor1;
	char	valor2;

	valor1 = i / 10 + '0';
	write(1, &valor1, 1);
	valor1 = i % 10 + '0';
	write(1, &valor1, 1);
	write(1, " ", 1);
	valor2 = j / 10 + '0';
	write(1, &valor2, 1);
	valor2 = j % 10 + '0';
	write(1, &valor2, 1);
	if (i != 98 || j != 99)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	max;

	max = 99;
	i = 0;
	while (i <= max)
	{
		j = i + 1;
		while (j <= max)
		{
			impresion(i, j);
			j++;
		}
		i++;
	}
}
