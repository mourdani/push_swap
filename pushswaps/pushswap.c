/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 07:55:42 by mourdani          #+#    #+#             */
/*   Updated: 2021/11/03 04:13:05 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	push_swap_hundered(t_stack a, t_stack b)
{
	int	*sorted;

	t_chunk chunk;
	int	hold_first;
	int	hold_second;
	int 	closest;
	int	i;
	int	max_i;
	int	j;
	int	n_a;
	int	n_b;


	sorted = init_sorted(a);
	
	chunk.number = 5;
	chunk.chunks = init_chunks(sorted, a.max_i, chunk.number);
	chunk.max_i = a.max_i / chunk.number;	
	max_i = a.max_i;	
//	printf("max_i = %d\n", a.max_i / chunk.number);
	
	get_smallest(a, b);
	push_a(&a, &b);
	
	get_biggest(a, b);
	push_a(&a, &b);
	
	i = 0;	
	j = 0;
	while (j < chunk.number)
	{
		i = 0;	
		while (i <= chunk.max_i && b.max_i < max_i)
		{
			hold_first = scan_from_top(a, chunk, j);
			hold_second = scan_from_bottom(a, chunk, j);
			closest = hold_first;
			if (find_nrotates(hold_first, a.max_i) > find_nrotates(hold_second, a.max_i))
				closest = hold_second;
			n_a = find_nrotates(closest, a.max_i);
			n_b = find_nrotates(find_pos(a, b, closest), b.max_i);
			arrange_stacks(a, b, n_a, n_b);			
			push_a(&a, &b);
			i++;
		}
		j++;
	}
	i = 0;
	while (b.stack[i] != sorted[b.max_i])
		i++;
	rotate_b_ntimes(b, find_nrotates(i, b.max_i));
	i = b.max_i;
	while ( i >= 0)
     {
     	push_b(&b, &a);
     	i--;
     }
//	print_stacks(a, b);
}
