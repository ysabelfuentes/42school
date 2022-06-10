/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:10:12 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/25 12:07:04 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

typedef struct s_printf
{
	va_list	args;
	int		len_print;
	char	type;
}			t_printf;

void		ft_printf_char(t_printf *pf);
void		ft_printf_string(t_printf *pf);
void		ft_printf_pointer(t_printf *pf);
void		ft_printf_integer(t_printf *pf);
void		ft_printf_unsigned(t_printf *pf);
void		ft_printf_hex(t_printf *pf);
void		ft_printf_percent(t_printf *pf);
void		ft_initialise_pf(t_printf *pf);
int			ft_eval_format(const char *format, t_printf *pf, int i);
int			ft_printf(const char *format, ...);

#endif