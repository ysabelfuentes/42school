/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:19:23 by yfuentes          #+#    #+#             */
/*   Updated: 2022/03/28 10:36:48 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	max;

	i = 0;
	max = size - 1;
	while (max > i)
	{
		temp = tab[i];
		tab[i] = tab[max];
		tab[max] = temp;
		i++;
		max--;
	}
}
