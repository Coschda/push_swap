/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:53:23 by mdoumi            #+#    #+#             */
/*   Updated: 2022/12/04 14:53:23 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort3(t_stack *a)
{
	if (is_sorted(a))
		return ;
	if (a->pile[0] > a->pile[1] && a->pile[1] < a->pile[2]
		&& a->pile[0] < a->pile[2])
		sa(a, 1);
	else if (a->pile[0] > a->pile[1] && a->pile[1] < a->pile[2]
		&& a->pile[0] > a->pile[2])
		ra(a, 1);
	else if (a->pile[0] > a->pile[1] && a->pile[1] > a->pile[2])
	{
		sa(a, 1);
		rra(a, 1);
	}
	else if (a->pile[0] < a->pile[1] && a->pile[1] > a->pile[2]
		&& a->pile[2] > a->pile[0])
	{
		sa(a, 1);
		ra(a, 1);
	}
	else if (a->pile[0] < a->pile[1] && a->pile[1] > a->pile[2]
		&& a->pile[2] < a->pile[0])
		rra(a, 1);
}

void	sort4(t_stack *a, t_stack *b)
{
	min_b(a, b);
	sort3(a);
	pa(a, b, 1);
}

void	sort5(t_stack *a, t_stack *b)
{
	min_b(a, b);
	min_b(a, b);
	sort3(a);
	pa(a, b, 1);
	pa(a, b, 1);
}
