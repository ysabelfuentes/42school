/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:12:33 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/23 15:52:12 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
    printf("%d", ft_isdigit('0'));
    printf("\n");
    printf("%d", ft_isdigit('2'));
    printf("\n");
    printf("%d", ft_isdigit('a'));
    return (0);
}