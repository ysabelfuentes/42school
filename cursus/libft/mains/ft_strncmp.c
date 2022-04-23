/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 11:02:11 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/23 15:59:10 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    char s1[10] = "aaa";
    char s2[10] = "aab";

    int compare1 = ft_strncmp(s1, s2, 2);
    int compare2 = ft_strncmp(s2, s1, 4);
    int compare3 = ft_strncmp(s1, s2, 4);
    int compare4 = ft_strncmp(s1, s2, 0);

    printf("결과1 : %d\n", compare1);
    printf("결과2 : %d\n", compare2);
    printf("결과3 : %d\n", compare3);
    printf("결과4 : %d\n", compare4);

    return 0;
}