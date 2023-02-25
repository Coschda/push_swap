/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 08:35:15 by mdoumi            #+#    #+#             */
/*   Updated: 2023/02/25 15:28:21 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ac == 2)
		arg_convert(&ac, &av);
	a = malloc(sizeof(t_stack));
	b = malloc(sizeof(t_stack));
	init_stacks(a, b, ac, av);
	if (is_sorted(a))
		exit(0);
	else if (a->size == 2)
		sa(a, 1);
	else if (a->size == 3)
		sort3(a);
	else if (a->size == 4)
		sort4(a, b);
	else if (a->size == 5)
		sort5(a, b);
	else
		big_sort(a, b);
}
