/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 15:29:31 by yfuentes          #+#    #+#             */
/*   Updated: 2022/03/27 21:50:27 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char *str, int n);
void	ft_putcad(char *str);
int		ft_putstr(char *str);

void	imprimir_matriz(int matriz[6][6], int filas, int columnas)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < filas)
	{
		j = 0;
		while (j < columnas)
		{
			c = matriz[i][j] + '0';
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	rellenar_condiciones(int matriz[6][6], char *str, int filas,
		int columnas)
{
	int	i;
	int	j;
	int	col;
	int	pos_array;

	i = 0;
	i = 0;
	pos_array = 0;
	while (i < filas)
	{
		j = 0;
		while (j < columnas)
		{
			while (*str)
			{
				if (pos_array >= 0 && pos_array <= 6)
				{
					col = 1;
					if (*str != ' ' && col <= 4)
					{
						matriz[i][j] = *str;
						col++;
					}
				}
				str++;
				pos_array++;
			}
			j++;
		}
		i++;
	}
}

void	rellenar_matriz(int matriz[6][6], int filas, int columnas)
{
	int	i;
	int	j;

	i = 0;
	while (i < filas)
	{
		j = 0;
		while (j < columnas)
		{
			matriz[i][j] = 4;
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	matriz[6][6];
	int	columnas;
	int	filas;

	filas = 6;
	columnas = 6;
	if ((argc == 2) && (ft_putstr(argv[1]) == 16))
	{
		inicializar_matriz(matriz, argv[1], filas, columnas);
		rellenar_condiciones(matriz, argv[1], filas, columnas);
		imprimir_matriz(matriz, filas, columnas);
	}
	else
	{
		ft_putcad("Error\n");
	}
}
