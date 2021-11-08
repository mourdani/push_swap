/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_fhundered.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 07:55:42 by mourdani          #+#    #+#             */
/*   Updated: 2021/11/07 16:21:40 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	push_swap_fhundered(t_stack a, t_stack b)
{
	int		max_i;
	t_chunk	chunk;

	chunk = init_chunk(chunk, a);
	max_i = a.max_i;
	send_smallest_biggest(a, b);
	b.max_i += 2;
	a.max_i -= 2;
	sort(a, b, chunk, max_i);
	b.max_i += a.max_i + 1;
	a.max_i = -1;
	send_b_to_a(a, b);
//	printf("a.max = %d\nb,max = %d\n", a.max_i, b.max_i);
//	print_stacks(a, b);
}
