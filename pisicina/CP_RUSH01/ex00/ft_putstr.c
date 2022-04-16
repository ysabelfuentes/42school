/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:55:23 by yfuentes          #+#    #+#             */
/*   Updated: 2022/03/27 20:09:03 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putstr(char *str)
{
	int	i;
	int	contador;

	contador = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (((i % 2) != 0) && (str[i] != ' '))
		{
			return (0);
		}
		if (((i % 2) == 0) && (str[i] > '0' && str[i] <= '4'))
		{
			contador++;
		}
		i++;
	}
	return (contador);
}
