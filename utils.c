/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:53:08 by mdoumi            #+#    #+#             */
/*   Updated: 2022/12/04 14:53:08 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	find_min(t_stack *a)
{
	int	i;
	int	min;

	i = 0;
	min = 0;
	while (i < a->size)
	{
		if (a->pile[min] > a->pile[i])
			min = i;
		i++;
	}
	return (min);
}

int	is_sorted(t_stack *a)
{
	int	i;

	i = 0;
	while (i < a->size - 1)
	{
		if (a->pile[i] > a->pile[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	min_b(t_stack *a, t_stack *b)
{
	int	i;
	int	min;

	i = 0;
	min = 0;
	while (i < a->size)
	{
		if (a->pile[i] < a->pile[min])
			min = i;
		i++;
	}
	push_by_i_a2b(a, b, min);
}

int	get_index(t_stack *a, int nb)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while (i < a->size)
	{
		if (nb > a->pile[i])
			index++;
		i++;
	}
	return (index);
}

int	**pop(int **tab, int index, int size)
{
	t_lines	a;
	int		**ntab;

	a.i = 0;
	ntab = malloc(sizeof(int *) * size - 1);
	while (a.i < size - 1)
		ntab[a.i++] = malloc(sizeof(int) * 2);
	a.i = 0;
	a.j = 0;
	while (a.i < index)
	{
		ntab[a.i][0] = tab[a.j][0];
		ntab[a.i++][1] = tab[a.j++][1];
	}
	a.j++;
	while (a.j < size)
	{
		ntab[a.i][0] = tab[a.j][0];
		ntab[a.i++][1] = tab[a.j++][1];
	}
	return (ntab);
}
