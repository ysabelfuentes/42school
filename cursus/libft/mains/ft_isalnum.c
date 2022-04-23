/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:12:33 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/23 15:42:39 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_isalnum('/'));
	printf("\n");
	printf("%d", ft_isalnum('2'));
	printf("\n");
	printf("%d", ft_isalnum('a'));
	return (0);
}
