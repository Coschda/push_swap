/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 06:12:12 by mdoumi            #+#    #+#             */
/*   Updated: 2023/02/25 15:28:21 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	depile(t_stack *s)
{
	int		elem;
	int		i;
	t_stack	*rep;

	if (s->size < 1)
	{
		write(1, "Error\nCan't 'depile' an empty stack.\n", 37);
		exit(0);
	}
	rep = malloc(sizeof(t_stack));
	rep->pile = malloc(sizeof(int) * (s->size - 1));
	elem = s->pile[0];
	i = 1;
	while (i < s->size)
	{
		rep->pile[i - 1] = s->pile[i];
		i++;
	}
	s->size = i - 1;
	s->pile = rep->pile;
	return (elem);
}

void	empile(t_stack *s, int nb)
{
	int		i;
	t_stack	*rep;

	rep = malloc(sizeof(t_stack));
	rep->pile = malloc(sizeof(int) * (s->size + 1));
	rep->pile[0] = nb;
	i = 1;
	while (i < s->size + 1)
	{
		rep->pile[i] = s->pile[i - 1];
		i++;
	}
	s->size = i;
	s->pile = rep->pile;
}

void	sa(t_stack *a, int pp)
{
	int	tmp;

	if (a->size <= 1)
		return ;
	tmp = a->pile[0];
	a->pile[0] = a->pile[1];
	a->pile[1] = tmp;
	if (pp == 1)
		write(1, "sa\n", 3);
}

void	sb(t_stack *b, int pp)
{
	int	tmp;

	if (b->size <= 1)
		return ;
	tmp = b->pile[0];
	b->pile[0] = b->pile[1];
	b->pile[1] = tmp;
	if (pp == 1)
		write(1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b, int pp)
{
	int	tmp;

	if (a->size <= 1)
		return ;
	tmp = a->pile[0];
	a->pile[0] = a->pile[1];
	a->pile[1] = tmp;
	if (b->size <= 1)
		return ;
	tmp = b->pile[0];
	b->pile[0] = b->pile[1];
	b->pile[1] = tmp;
	if (pp == 1)
		write(1, "ss\n", 3);
}
