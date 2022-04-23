/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:12:26 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/23 16:00:55 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_isalpha('A'));
	printf("\n");
	printf("%d", ft_isalpha('A'));
	printf("\n");
	printf("%d", ft_isalpha('z'));
	return (0);
}
