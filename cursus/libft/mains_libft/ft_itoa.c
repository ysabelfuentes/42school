/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 15:59:27 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/04 16:40:22 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int		s1;
	int		i;
	char	*tmp;

	s1 = -78475674;
	tmp = ft_itoa(s1);
	i = 0;
	while (tmp[i] != '\0')
	{
		printf("string pos %d valor: '%c'\n", i, tmp[i]);
		i++;
	}
	free(tmp);
	return (0);
}
