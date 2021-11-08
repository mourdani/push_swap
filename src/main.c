/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 00:59:50 by mourdani          #+#    #+#             */
/*   Updated: 2021/11/08 14:51:32 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"
#include <stdlib.h>
#include <string.h>

int	a_is_sorted(t_stack a)
{
	int i;

	i = 0;
	while (a.stack[i] != a.sorted[i])
	{
		i++;
		return (0);
	}
	return (1);
}



int main(int argc, char **argv)
{
	t_stack a;
	t_stack b; 
       	
	a.stack = (int*)malloc(sizeof(int) * argc - 1);
	a.sorted = (int*)malloc(sizeof(int) * argc - 1);
	b.stack = (int*)malloc(sizeof(int) * argc - 1);
	a.max_i = argc - 2;
	b.max_i = -1;
	init_a(a, argv);
	if (argc == 1 || argc == 2 || memcmp(a.stack, a.sorted, sizeof(int*) * (a.max_i + 1)) == 0)
		return (0);
	if (argc == 4)
		push_swap_three(a, b);
	else if (argc == 6)
		push_swap_five(a, b);
/*	else if (argc == 101)
		push_swap_hundered(a, b);
	else if (argc == 501)
		push_swap_fhundered(a, b);
	else
		push_swap(a, b);*/
//	print_stacks(a, b);
	free(a.stack);
	free(b.stack);
	return (0);
}
