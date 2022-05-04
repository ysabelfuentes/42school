/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 10:42:18 by lagarcia          #+#    #+#             */
/*   Updated: 2022/04/23 15:41:21 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;
	int		num1;
	int		num2;
	int		num3;
	int		num4;

	s1 = "-123";
	s2 = "a123";
	s3 = "  123aa";
	s4 = "123 -123";
	num1 = ft_atoi(s1);
	num2 = ft_atoi(s2);
	num3 = ft_atoi(s3);
	num4 = ft_atoi(s4);
	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", num3);
	printf("%d\n", num4);
	return (0);
}
