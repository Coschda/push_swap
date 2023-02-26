/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoumi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 08:38:47 by mdoumi            #+#    #+#             */
/*   Updated: 2023/02/26 11:08:04 by mdoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "get_next_line/get_next_line_bonus.h"

typedef struct s_stack
{
	int	*pile;
	int	size;
}	t_stack;

typedef struct s_lines
{
	int	i;
	int	j;
	int	min;
	int	begin_size;
	int	**tab;
	int	cost;
	int	top_num;
}	t_lines;

typedef struct s_atoi
{
	int				i;
	long long int	result;
	int				singe;
	int				comp;
}	t_atoi;

//algo.c

void			big_sort(t_stack *a, t_stack *b);

//commands.c

int				depile(t_stack *s);
void			empile(t_stack *s, int nb);
void			sa(t_stack *a, int pp);
void			sb(t_stack *b, int pp);
void			ss(t_stack *a, t_stack *b, int pp);

//commands2.c

void			pa(t_stack *a, t_stack *b, int pp);
void			pb(t_stack *a, t_stack *b, int pp);
void			ra(t_stack *a, int pp);
void			rb(t_stack *b, int pp);
void			rr(t_stack *a, t_stack *b, int pp);

//commands3.c

void			rra(t_stack *a, int pp);
void			rrb(t_stack *b, int pp);
void			rrr(t_stack *a, t_stack *b, int pp);

//push.c

void			push_by_i_a2b(t_stack *a, t_stack *b, int nb);
void			push_by_i_b2a(t_stack *a, t_stack *b, int nb);
void			push_it(t_stack *a, t_stack *b, int min, int *elem);
void			push_them(t_stack *a, t_stack *b, int **tab, int begin_size);
void			push_b_until_3(t_stack *a, t_stack *b);

//utils.c

int				find_min(t_stack *a);
int				is_sorted(t_stack *a);
void			min_b(t_stack *a, t_stack *b);
int				get_index(t_stack *a, int nb);
int				**pop(int **tab, int index, int size);

//ft_split.c

char			**ft_split(char *str, char charset);

//gadjo.c

int				ft_strcmp(char *s1, char *s2);
long long int	ft_atoi(const char *str);
void			init_stacks(t_stack *a, t_stack *b, int ac, char **av);
void			arg_convert(int *ac, char ***av);

#endif
