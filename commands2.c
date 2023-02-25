/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 15:04:22 by mdoumi            #+#    #+#             */
/*   Updated: 2022/12/04 15:04:22 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	pa(t_stack *a, t_stack *b, int pp)
{
	if (b->size < 1)
		return ;
	empile(a, depile(b));
	if (pp == 1)
		write(1, "pa\n", 3);
}

void	pb(t_stack *a, t_stack *b, int pp)
{
	if (a->size < 1)
		return ;
	empile(b, depile(a));
	if (pp == 1)
		write(1, "pb\n", 3);
}

void	ra(t_stack *a, int pp)
{
	int	tmp;
	int	i;

	tmp = a->pile[0];
	i = 0;
	while (i < a->size - 1)
	{
		a->pile[i] = a->pile[i + 1];
		i++;
	}
	a->pile[i] = tmp;
	if (pp == 1)
		write(1, "ra\n", 3);
}

void	rb(t_stack *b, int pp)
{
	int	tmp;
	int	i;

	tmp = b->pile[0];
	i = 0;
	while (i < b->size - 1)
	{
		b->pile[i] = b->pile[i + 1];
		i++;
	}
	b->pile[i] = tmp;
	if (pp == 1)
		write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b, int pp)
{
	int	tmp;
	int	i;

	tmp = a->pile[0];
	i = 0;
	while (i < a->size - 1)
	{
		a->pile[i] = a->pile[i + 1];
		i++;
	}
	a->pile[i] = tmp;
	tmp = b->pile[0];
	i = 0;
	while (i < b->size - 1)
	{
		b->pile[i] = b->pile[i + 1];
		i++;
	}
	b->pile[i] = tmp;
	if (pp == 1)
		write(1, "rr\n", 3);
}
