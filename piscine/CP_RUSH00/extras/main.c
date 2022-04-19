/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunez-n <enunez-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 21:48:34 by enunez-n          #+#    #+#             */
/*   Updated: 2022/03/20 17:10:12 by enunez-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);
void	rush00(int x, int y);
void	rush01(int x, int y);
void	rush02(int x, int y);
void	rush03(int x, int y);
void	rush04(int x, int y);

int	main(void)
{
	int	x;
	int	y;
	int	r;

	write(1, "Introduzca número de Rush: ", 28);
	scanf("%d", &r);
	write(1, "Introduzca ancho: ", 18);
	scanf("%d", &x);
	write(1, "Introduzca alto: ", 17);
	scanf("%d", &y);
	if (r == 0)
		rush00(x, y);
	if (r == 1)
		rush01(x, y);
	if (r == 2)
		rush02(x, y);
	if (r == 3)
		rush03(x, y);
	if (r == 4)
		rush04(x, y);
	return (0);
}
