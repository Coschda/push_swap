/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gadjo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:00:31 by mdoumi            #+#    #+#             */
/*   Updated: 2023/02/25 15:28:26 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

long long int	ft_atoi(const char *str)
{
	t_atoi	a;

	a.i = 0;
	a.result = 0;
	a.comp = 0;
	a.singe = 1;
	while (str[a.i] == ' ' || (9 <= str[a.i] && str[a.i] <= 13))
		a.i++;
	while (str[a.i] == '+' || str[a.i] == '-')
	{
		if (str[a.i] == '-')
			a.singe = a.singe * -1;
		if (a.comp++ >= 1)
			return (0);
		a.i++;
	}
	while ('0' <= str[a.i] && str[a.i] <= '9')
	{
		a.result = a.result * 10 + (str[a.i] - '0');
		a.i++;
	}
	return (a.result * a.singe);
}

void	init_stacks(t_stack *a, t_stack *b, int ac, char **av)
{
	int	i;

	a->pile = malloc(sizeof(int) * (ac - 1));
	i = 1;
	while (i < ac)
	{
		a->pile[i - 1] = ft_atoi(av[i]);
		i++;
	}
	a->size = i - 1;
	b->pile = malloc(sizeof(int));
	b->size = 0;
	if (ft_strcmp(av[0], "a.out") == 0)
	{
		i = 0;
	}
}

void	arg_convert(int *ac, char ***av)
{
	int		i;
	char	**argv;

	argv = ft_split((*av)[1], ' ');
	i = 0;
	while (argv[i])
		i++;
	*av = argv;
	*ac = i;
}
