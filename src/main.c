/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 00:59:50 by mourdani          #+#    #+#             */
/*   Updated: 2021/11/05 05:28:50 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"
#include <stdlib.h>


int	a_is_sorted(t_stack a)
{
	int i;
	int *sorted;

	i = -1;
	sorted = init_sorted(a);
	while (a.stack[i++] != sorted[i])
		return (0);
	return (1);
}



int main(int argc, char **argv)
{
	t_stack a;
	t_stack b; 
       	
	a.stack = (int*)malloc(sizeof(int) * argc - 1);
	b.stack = (int*)malloc(sizeof(int) * argc - 1);
	a.max_i = argc - 2;
	b.max_i = -1;
	init_a(a, argv);
	if (argc == 1 || argc == 2 || a_is_sorted(a) == 1)
		return (0);
	if (argc == 4)
		push_swap_three(a, b);
	else if (argc == 6)
		push_swap_five(a, b);
	else if (argc == 101)
		push_swap_hundered(a, b);
	else if (argc == 501)
		push_swap_fhundered(a, b);
	else
		push_swap(a, b);
	return (0);
}
