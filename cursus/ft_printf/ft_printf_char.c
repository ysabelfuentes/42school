/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:04:42 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/20 11:02:01 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_char(t_printf *pf)
{
	char	c;

	c = (char)va_arg(pf->args, int);
	ft_putchar_fd(c, 1);
	pf->len_print += 1;
}
