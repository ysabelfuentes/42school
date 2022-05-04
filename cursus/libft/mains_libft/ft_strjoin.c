/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:14:24 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/26 10:59:41 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	main(void)
{
	char s1[] = "my favorite animal is";
	char s2[] = " the nyancat";
	char *res = ft_strjoin(s1, s2);
	printf("cadena concatenada %s \n", res);
	free(res);
	return (0);
}
