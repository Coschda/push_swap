/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 15:05:00 by mdoumi            #+#    #+#             */
/*   Updated: 2022/12/04 15:05:00 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rra(t_stack *a, int pp)
{
	int	tmp;
	int	i;

	tmp = a->pile[a->size - 1];
	i = a->size - 2;
	while (i >= 0)
	{
		a->pile[i + 1] = a->pile[i];
		i--;
	}
	a->pile[0] = tmp;
	if (pp == 1)
		write(1, "rra\n", 4);
}

void	rrb(t_stack *b, int pp)
{
	int	tmp;
	int	i;

	tmp = b->pile[b->size - 1];
	i = b->size - 2;
	while (i >= 0)
	{
		b->pile[i + 1] = b->pile[i];
		i--;
	}
	b->pile[0] = tmp;
	if (pp == 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b, int pp)
{
	int	tmp;
	int	i;

	tmp = a->pile[a->size - 1];
	i = a->size - 2;
	while (i >= 0)
	{
		a->pile[i + 1] = a->pile[i];
		i--;
	}
	a->pile[0] = tmp;
	tmp = b->pile[b->size - 1];
	i = b->size - 2;
	while (i >= 0)
	{
		b->pile[i + 1] = b->pile[i];
		i--;
	}
	b->pile[0] = tmp;
	if (pp == 1)
		write(1, "rrr\n", 4);
}
