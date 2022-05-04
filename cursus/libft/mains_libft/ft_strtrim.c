/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:04:03 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/04 17:36:32 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	s1[] = "pen pineapple apple pen";
	char	s2[] = "pen";
	char	*ptr;

	ptr = ft_strtrim(s1, s2);
	printf("%s\n", ptr);
	return (0);
}
