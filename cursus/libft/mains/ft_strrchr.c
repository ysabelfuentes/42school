/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 11:41:35 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/23 15:58:35 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
     char str[] = "hola lola to";
	printf("%s", ft_strrchr(str, 'a'));
	printf("\n");
	printf("%s", ft_strrchr(str, 'a'));
     printf("\n");
	printf("%s", ft_strrchr(str, '\0'));
	return (0);
}