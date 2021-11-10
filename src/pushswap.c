/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 07:55:42 by mourdani          #+#    #+#             */
/*   Updated: 2021/11/09 14:04:35 by ymehdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void	sort_three(t_stack *a)
{
	if (a->stack[0] > a->stack[1] && a->stack[1]
		< a->stack[2] && a->stack[2] < a->stack[0])
		swap(a);
	else if (a->stack[0] < a->stack[1] && a->stack[1]
		< a->stack[2] && a->stack[2] > a->stack[0])
	{
		swap(a);
		rrotate_a(a);
	}
	else if (a->stack[0] > a->stack[1] && a->stack[1]
		< a->stack[2] && a->stack[2] > a->stack[0])
		rotate_a(a);
	else if (a->stack[0] < a->stack[1] && a->stack[1]
		> a->stack[2] && a->stack[2] < a->stack[0])
	{
		swap(a);
		rotate_a(a);
	}
	else if (a->stack[0] < a->stack[1] && a->stack[1]
		> a->stack[2] && a->stack[2] > a->stack[0])
		rrotate_a(a);
}

void sort_four(t_stack *a, t_stack *b)
{
	get_smallest(a);
	push_a(a, b);
	sort_three(a);
	push_b(b, a);
}

void	sort_five(t_stack *a, t_stack *b)
{
	get_smallest(a);
	push_a(a, b);
	get_biggest(a);
	push_a(a, b);
	sort_three(a);
	if (b->stack[0] < b->stack[1])
		swap_b(b);
	push_b(b, a);
	push_b(b, a);
	rotate_a(a);
}

void sort_two(t_stack *a)
{
	int i;

	i = 0;
	if (a->stack[i] < a->stack[i + 1])
		swap(a);
}

void	sort_fhundered(t_stack *a, t_stack *b, t_chunk chunk)
{
	int		max_i;

	max_i = a->max_i;
	send_smallest_biggest(a, b);
	sort_stacks(a, b, chunk, max_i);
	send_b_to_a(a, b);
}

void	sort_hundered(t_stack *a, t_stack *b, t_chunk chunk)
{
	int		max_i;

	max_i = a->max_i;
	send_smallest_biggest(a, b);
	sort_stacks(a, b, chunk, max_i);
	send_b_to_a(a, b);
}

void	sort_others(t_stack *a, t_stack *b, t_chunk chunk)
{
	int		max_i;

	max_i = a->max_i;
	send_smallest_biggest(a, b);
	sort_stacks(a, b, chunk, max_i);
	send_b_to_a(a, b);
}
