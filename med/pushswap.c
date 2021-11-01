/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 07:55:42 by mourdani          #+#    #+#             */
/*   Updated: 2021/11/01 02:44:19 by mourdani         ###   ########.fr       */
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
	printf("b.maxi_i = %d\n", b.max_i);
	print_stacks(a, b);
	while (j < 5)
	{
		i = 0;	
		while (i <= 19)
		{
			hold_first = scan_from_top(a, chunk, j);
			hold_second = scan_from_bottom(a, chunk, j);
			printf("hold_first = %d\nhold_second = %d\n", hold_first, hold_second);
			printf("a.max_i = %d\n", a.max_i);
		
			rotate_ntimes(a, find_closest(a, hold_first, hold_second));
			rotate_ntimes(b, find_nrotates(find_pos(a, b, a.max_i), b.max_i));
			push(&a, &b);
			i++;
		}
		print_stacks(a, b);
		printf("b.maxi_i = %d\n", b.max_i);
		j++;
	}
}
