/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joslopez <joslopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:59:12 by joblanco          #+#    #+#             */
/*   Updated: 2022/04/03 18:47:29 by joslopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	main(int ac, char **arg)
{
	char	*file;
	char	*num_arg;

	if ((ac < 2) || (ac > 3))
	{
		write(1, "Argument error\n", 13);
		return (1);
	}
	else
	{
		if (ac == 2)
		{
			num_arg = arg[1];
			openfile_init("numbers.dict", num_arg);
		}
		else
		{
			num_arg = arg[2];
			file = arg[1];
			openfile_diff(file, num_arg);
		}
	}
	return (0);
}
