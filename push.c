/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:53:45 by mdoumi            #+#    #+#             */
/*   Updated: 2022/12/04 14:53:45 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	push_by_i_a2b(t_stack *a, t_stack *b, int nb)
{
	int	cn;

	cn = 0;
	if (((float)nb / (float)a->size) <= 0.5)
	{
		while (cn < nb)
		{
			ra(a, 1);
			cn++;
		}
		pb(a, b, 1);
	}
	else if (((float)nb / (float)a->size) > 0.5)
	{
		while (cn < (a->size - nb))
		{
			rra(a, 1);
			cn++;
		}
		pb(a, b, 1);
	}
}

void	push_by_i_b2a(t_stack *a, t_stack *b, int nb)
{
	int	cn;

	cn = 0;
	if (((float)nb / (float)b->size) <= 0.5)
	{
		while (cn < nb)
		{
			rb(b, 1);
			cn++;
		}
		pa(a, b, 1);
	}
	else if (((float)nb / (float)b->size) > 0.5)
	{
		while (cn < (b->size - nb))
		{
			rrb(b, 1);
			cn++;
		}
		pa(a, b, 1);
	}
}

void	push_it(t_stack *a, t_stack *b, int min, int *elem)
{
	int	i;

	i = 0;
	if (elem[1] <= a->size / 2)
	{
		while (i < elem[3])
		{
			ra(a, 1);
			i++;
		}
		push_by_i_b2a(a, b, min);
	}
	else
	{
		while (i < elem[3])
		{
			rra(a, 1);
			i++;
		}
		push_by_i_b2a(a, b, min);
	}
}

void	push_them(t_stack *a, t_stack *b, int **tab, int begin_size)
{
	int	i;
	int	push_count;

	i = 0;
	push_count = 0;
	while (a->size > 3)
	{
		if (i == a->size)
			i = 0;
		if (tab[i][1] <= begin_size / 2 || push_count >= (begin_size) / 2)
		{
			tab = pop(tab, i, a->size);
			pb(a, b, 1);
			push_count++;
		}
		else
		{
			ra(a, 1);
			i++;
		}
	}
}

void	push_b_until_3(t_stack *a, t_stack *b)
{
	int	i;
	int	begin_size;
	int	**tab;

	i = -1;
	tab = malloc(sizeof(int *) * a->size);
	while (++i < a->size)
		tab[i] = malloc(sizeof(int) * 2);
	i = 0;
	while (i < a->size)
	{
		tab[i][0] = a->pile[i];
		tab[i][1] = get_index(a, a->pile[i]);
		i++;
	}
	begin_size = i;
	push_them(a, b, tab, begin_size);
}
