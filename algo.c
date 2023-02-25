/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 07:15:01 by mdoumi            #+#    #+#             */
/*   Updated: 2022/11/30 11:40:50 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	big_sort(t_stack *a, t_stack *b)
{
	int	i;
	int	min_i;

	while (a->size > 0)
	{
		i = 0;
		min_i = 0;
		while (i < a->size)
		{
			if (a->pile[i] < a->pile[min_i])
				min_i = i;
			i++;
		}
		push_by_i_a2b(a, b, min_i);
	}
	while (b->size > 0)
	{
		pa(a, b, 1);
	}
}
