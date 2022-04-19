/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:01:26 by yfuentes          #+#    #+#             */
/*   Updated: 2022/03/23 20:02:20 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_combn(int start, int n)
{
	int	i;

	if (n == 0)
	{
		ft_putchar(',');
		ft_putchar(' ');
		return ;
	}
	i = start + 1;
	while (i < 10)
	{
		ft_putchar(start + '0');
		ft_putchar(i + '0');
		ft_combn(i, n - 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	ft_combn(0, n);
}
