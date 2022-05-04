/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 11:41:32 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/23 15:54:41 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char		str[] = "hola lola to";

	printf("%s", ft_strchr(str, 'a'));
	printf("\n");
	printf("%s", ft_strchr(str, 'o'));
	printf("\n");
	printf("%s", ft_strchr(str, '\0'));
	return (0);
}
