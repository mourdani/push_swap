/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_five.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 07:55:42 by mourdani          #+#    #+#             */
/*   Updated: 2021/11/03 03:28:25 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	push_swap_five(t_stack a, t_stack b)
{
	int *sorted;
	int i;

	sorted = init_sorted(a);
	i = 0;
	while (a.stack[i] != sorted[a.max_i])
		i++;
	rotate_a_ntimes(a, find_nrotates(i, a.max_i));	
	push_a(&a, &b);
	i = 0;
	while (a.stack[i] != sorted[0])
		i++;
	rotate_a_ntimes(a, find_nrotates(i, a.max_i));	
	push_a(&a, &b);
	
	push_swap_three(a, b);
	push_b(&b, &a);
	push_b(&b, &a);
	rotate_a(&a);
}