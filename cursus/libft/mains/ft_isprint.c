/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:12:33 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/23 15:52:22 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_isprint('\n'));
	printf("\n");
	printf("%d", ft_isprint('a'));
	printf("\n");
	printf("%d", ft_isprint('~'));
	return (0);
}
