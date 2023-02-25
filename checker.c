/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:18:16 by mdoumi            #+#    #+#             */
/*   Updated: 2023/02/25 15:28:21 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushbonus.h"

void	big_if(char *buf, t_stack *a, t_stack *b)
{
	if (ft_strcmp(buf, "sa\n") == 0)
		sa(a, 1);
	else if (ft_strcmp(buf, "sb\n") == 0)
		sb(b, 1);
	else if (ft_strcmp(buf, "ss\n") == 0)
		ss(a, b, 1);
	else if (ft_strcmp(buf, "pa\n") == 0)
		pa(a, b, 1);
	else if (ft_strcmp(buf, "pb\n") == 0)
		pb(a, b, 1);
	else if (ft_strcmp(buf, "ra\n") == 0)
		ra(a, 1);
	else if (ft_strcmp(buf, "rb\n") == 0)
		rb(b, 1);
	else if (ft_strcmp(buf, "rr\n") == 0)
		rr(a, b, 1);
	else if (ft_strcmp(buf, "rra\n") == 0)
		rra(a, 1);
	else if (ft_strcmp(buf, "rrb\n") == 0)
		rrb(b, 1);
	else if (ft_strcmp(buf, "rrr\n") == 0)
		rrr(a, b, 1);
}

void	checker(t_stack *a, t_stack *b)
{
	char	*buf;

	buf = get_next_line(0);
	while (buf)
	{
		big_if(buf, a, b);
		buf = get_next_line(0);
	}
	if (is_sorted(a) == 1)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ac == 2)
		arg_convert(&ac, &av);
	arg_check(ac, av);
	a = malloc(sizeof(t_stack));
	b = malloc(sizeof(t_stack));
	init_stacks(a, b, ac, av);
	checker(a, b);
}
