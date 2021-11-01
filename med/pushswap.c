/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 07:55:42 by mourdani          #+#    #+#             */
/*   Updated: 2021/11/01 05:34:39 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	push_swap(t_stack a, t_stack b)
{
	int	*sorted;
	int	**chunk;
	int	chunks_number;
	int	hold_first;
	int	hold_second;
	int 	closest;
	int	i;
	int	j;
	int	max_i;
	int	n_a;
	int	n_b;


	max_i = a.max_i;
	sorted = init_sorted(a);
	chunks_number = 5;
	chunk = init_chunks(sorted, a.max_i, 5);
	
	i = 0;
	while (a.stack[i] != sorted[0])
		i++;
	rotate_ntimes(a, find_nrotates(i, a.max_i));
	push(&a, &b);
	i = 0;
	while (a.stack[i] != sorted[a.max_i + 1])
		i++;
	rotate_ntimes(a, find_nrotates(i, a.max_i));
	push(&a, &b);
	i = 0;	
	j = 0;
	while (j < 5)
	{
		i = 0;	
		while (i <= 19)
		{
			hold_first = scan_from_top(a, chunk, j);
			hold_second = scan_from_bottom(a, chunk, j);
			closest = hold_first;
			if (find_nrotates(hold_first, a.max_i) > find_nrotates(hold_second, a.max_i))
				closest = hold_second;
			n_a = find_nrotates(closest, a.max_i);
			n_b = find_nrotates(find_pos(a, b, closest), b.max_i);
			arrange_stacks(a, b, n_a, n_b);			
			push(&a, &b);
			i++;
		}
		j++;
	}
	b.max_i -= 2;
	a.max_i += 2;
	i = 0;
	while (b.stack[i] != sorted[b.max_i])
		i++;
	rotate_ntimes(b, find_nrotates(i, b.max_i));
	i = b.max_i;
	while ( i >= 0)
	{
		push(&b, &a);
		i--;
	}
	print_stacks(a, b);
}
