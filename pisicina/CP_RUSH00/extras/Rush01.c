/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 21:07:28 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/20 13:00:34 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush01(int x, int y)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	while (b <= y)
	{
		while (a <= x)
		{
			if ((b == 1 && a == 1) || (b == y && a == x))
				ft_putchar('/');
			else if ((b == y && a == 1) || (b == 1 && a == x))
				ft_putchar('\\');
			else if ((a > 1 && a < x) && (b > 1 && b < y))
				ft_putchar(' ');
			else
				ft_putchar('*');
			if (a == x)
				ft_putchar('\n');
			a++;
		}
		a = 1;
		b++;
	}
}
