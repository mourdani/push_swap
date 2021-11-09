/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_hundered.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 07:55:42 by mourdani          #+#    #+#             */
/*   Updated: 2021/11/07 16:25:41 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	push_swap_hundered(t_stack a, t_stack b, t_chunk chunk)
{
	int		max_i;

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
