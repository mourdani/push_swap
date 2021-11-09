/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 00:59:50 by mourdani          #+#    #+#             */
/*   Updated: 2021/11/09 06:56:54 by mourdani         ###   ########.fr       */
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
	t_chunk chunk;
	int j;
       	
	j = 0;
	a.stack = (int*)malloc(sizeof(int) * argc - 1);
	a.sorted = (int*)malloc(sizeof(int) * argc - 1);
	b.stack = (int*)malloc(sizeof(int) * argc - 1);

	a.max_i = argc - 2;
	b.max_i = -1;
	init_a(a, argv);

	if (argc == 1 || argc == 2 || memcmp(a.stack, a.sorted, sizeof(int*) * (a.max_i + 1)) == 0)
		return (0);
//	printf("chunk max_i = %d\n", chunk.max_i);
	init_chunk(&chunk, a);
//	printf("chunk max_i = %d\n", chunk.max_i);
	
	if (!(chunk.chunks = (int **)malloc(sizeof(int*) * chunk.number)))
		return (0);
	
	while (j < chunk.max_i)
	{
		if (!(chunk.chunks[j] = (int *)malloc(sizeof(int) * (chunk.max_i + 1))))
			return (0);
		j++;
	}
	init_chunks(a, chunk);
//	print_stack(chunk.chunks[0], chunk.max_i);
	
	
	if (argc == 4)
		push_swap_three(a, b);
	else if (argc == 6)
		push_swap_five(a, b);
/*	else if (argc == 101)
		push_swap_hundered(a, b);
	else if (argc == 501)
		push_swap_fhundered(a, b);*/
	else
		push_swap(a, b, chunk);
	j = 0;
//	while (j < chunk.max_i)
//	{
//		free(chunk.chunks[j]);
//		j++;
//	}
//	free(a);
//	free(b);
//	free(a);
	return (0);
}
