/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 11:04:31 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/23 15:54:57 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dst[] = "This is ";
    char src[] = "a potentially long string";
    int r;
    int size = 12;
    char buffer[size];

    strcpy(buffer,dst);
    r = strlcat(buffer,src,size);
	
	printf("%s: \n", buffer);
	printf("Value returned: %d\n", r);
	if (r > size)
		printf("String truncated");
	else
		printf("String was fully copied");
	return (0);
}
