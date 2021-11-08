/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_five.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 07:55:42 by mourdani          #+#    #+#             */
/*   Updated: 2021/11/08 14:58:02 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	push_swap_five(t_stack a, t_stack b)
{
	int i;

	get_smallest(a, b);
	push_a(&a, &b);
	get_biggest(a, b);	
	push_a(&a, &b);
	push_swap_three(a, b);
	if (b.stack[0] < b.stack[1])
		swap(&b);
	push_b(&b, &a);
	push_b(&b, &a);
	rotate_a(&a);
	print_stacks(a, b);
}
