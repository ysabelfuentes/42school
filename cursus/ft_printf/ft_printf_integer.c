/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_integer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:06:01 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/20 11:02:08 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_integer(t_printf *pf)
{
	int		i;
	char	*str_num;

	i = va_arg(pf->args, int);
	str_num = ft_itoa(i);
	pf->len_print += ft_strlen(str_num);
	ft_putstr_fd(str_num, 1);
	free(str_num);
}
