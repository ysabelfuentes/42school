/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:39:05 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/23 15:55:18 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	dest[6];
	char	*src;

	src = "Hola Mundo";
	printf("%lu", ft_strlcpy(dest, src, 4));
	printf(" ");
	printf("%s", dest);
	return (0);
}