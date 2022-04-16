/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:42:02 by yfuentes          #+#    #+#             */
/*   Updated: 2022/04/05 16:38:27 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

int	ft_print_params(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac <= 1)
	{
		return (0);
	}
	else
	{
		while (i < ac)
		{
			j = 0;
			while (av[i][j] != '\0')
			{
				write(1, &av[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int ac, char **av)
{
	int	num_arg;

	num_arg = 1;
	while (num_arg < (ac - 1))
	{
		if (ft_strcmp(av[num_arg], av[num_arg + 1]) > 0)
		{
			ft_swap(&av[num_arg], &av[num_arg + 1]);
			num_arg = 1;
		}
		else
		{
			num_arg++;
		}
	}
	ft_print_params(ac, av);
	return (0);
}
