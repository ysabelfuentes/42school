/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:15:02 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/25 16:19:24 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str;
	size_t	size;
	char	*ret;

	str = "i just want this part #############";
	size = 20;
	ret = ft_substr(str, 5, size);
	printf(" con ft_ %s \n", ret);
	free(ret);
	return (0);
}

