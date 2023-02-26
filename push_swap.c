/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 08:35:15 by mdoumi            #+#    #+#             */
/*   Updated: 2023/02/26 11:09:53 by mdoumi           ###   ########.fr       */
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
	big_sort(a, b);
}
