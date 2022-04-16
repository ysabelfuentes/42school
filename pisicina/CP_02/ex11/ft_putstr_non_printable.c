/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:07:17 by yfuentes          #+#    #+#             */
/*   Updated: 2022/03/30 15:45:59 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	imprimir_hexadecimal(int valor)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (valor > 16)
	{
		imprimir_hexadecimal(valor / 10);
		imprimir_hexadecimal(valor % 10);
	}
	else
		ft_putchar(hex[valor]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= 31 && str[i] >= 0) || str[i] == 127)
		{
			write(1, "\\", 1);
			if (str[i] < 16)
				ft_putchar('0');
			imprimir_hexadecimal(str[i]);
		}
		else
			ft_putchar(str[i]);
		i += 1;
	}
}
