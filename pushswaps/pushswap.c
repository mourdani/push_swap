/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 07:55:42 by mourdani          #+#    #+#             */
/*   Updated: 2021/11/09 06:40:15 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	find_pos_closest_in_b(t_stack a, t_stack b, t_chunk chunk, int j)
{
	int	n_a;
	int	n_b;
	int	hold_first;
	int	hold_second;
	int	closest;

	hold_first = scan_from_top(a, chunk, j);
	hold_second = scan_from_bottom(a, chunk, j);
	closest = hold_first;
	if (find_nrotates(hold_first, a.max_i)
		> find_nrotates(hold_second, a.max_i))
		closest = hold_second;
	n_a = find_nrotates(closest, a.max_i);
	n_b = find_nrotates(find_pos(a, b, closest), b.max_i);
	arrange_stacks(a, b, n_a, n_b);
}

void	send_b_to_a(t_stack a, t_stack b)
{
	int	i;

	i = 0;
	while (b.stack[i] != a.sorted[b.max_i])
		i++;
	rotate_b_ntimes(b, find_nrotates(i, b.max_i));
	i = b.max_i;
	while (i-- >= 0)
		push_b(&b, &a);
}

void	send_smallest_biggest(t_stack a, t_stack b)
{
	get_smallest(a, b);
	push_a(&a, &b);
	get_biggest(a, b);
	push_a(&a, &b);
}

void	sort(t_stack a, t_stack b, t_chunk chunk, int max_i)
{
	int	i;
	int	j;

	j = -1;
	while (j++ < chunk.number && b.max_i < max_i)
	{
		i = -1;
		while (i++ <= chunk.max_i && b.max_i < max_i)
		{
			find_pos_closest_in_b(a, b, chunk, j);
			push_a(&a, &b);
		}
	}
}

void	init_chunk(t_chunk *chunk, t_stack a)
{
	chunk->number = 5;
	chunk->max_i = a.max_i / chunk->number;
}

void	push_swap(t_stack a, t_stack b, t_chunk chunk)
{
	int		max_i;
	int i;

	max_i = a.max_i;
	send_smallest_biggest(a, b);
	b.max_i += 2;
	a.max_i -= 2;
	sort(a, b, chunk, max_i);
	b.max_i += a.max_i + 1;
	a.max_i = -1;
	send_b_to_a(a, b);
//	print_stacks(a, b);
}
