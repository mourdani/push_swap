/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:18:59 by mourdani          #+#    #+#             */
/*   Updated: 2021/11/10 11:19:55 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void	init_a_b(t_stack a, t_stack b, char **argv)
{
	int	i;
	int	j;
	int	*temp;

	i = 0;
	j = a.max_i + 1;
	while (j > 0)
		a.stack[i++] = ft_atoi(argv[j--]);
	i = 0;
	while (i <= a.max_i)
	{
		b.stack[i] = 0;
		i++;
	}
	a.max_i = --i;
	temp = (int *)malloc(sizeof(int) * (a.max_i + 1));
	if (!temp)
		return ;
	ft_memcpy(temp, a.stack, (a.max_i + 1) * sizeof(int));
	ft_memcpy(a.sorted, quicksort
		(temp, 0, a.max_i), (a.max_i + 1) * sizeof(int));
	free(temp);
}

void	init_chunks(t_stack a, t_chunk *chunk)
{
	int	s;
	int	i;
	int	j;

	j = 0;
	s = 0;
	while (j < chunk->number)
	{
		i = 0;
		while (i <= (chunk->max_i))
		{
			chunk->chunks[j][i] = a.sorted[s];
			i++;
			s++;
		}
		j++;
	}
}

void	init_chunk(t_chunk *chunk, t_stack a)
{
	if (a.max_i >= 499)
		chunk->number = 11;
	else
		chunk->number = 5;
	chunk->max_i = a.max_i / chunk->number;
}

void	malloc_a_b(t_stack *a, t_stack *b, int argc)
{
	a->stack = (int *)malloc(sizeof(int) * argc - 1);
	a->sorted = (int *)malloc(sizeof(int) * argc - 1);
	b->stack = (int *)malloc(sizeof(int) * argc - 1);
	a->max_i = argc - 2;
	b->max_i = -1;
}

void	malloc_chunks(t_stack a, t_chunk *chunk)
{
	int	j;

	j = 0;
	init_chunk(chunk, a);
	chunk->chunks = (int **)malloc(sizeof(int *) * chunk->number);
	if (!(chunk->chunks))
		return ;
	while (j < chunk->number)
	{
		chunk->chunks[j] = (int *)malloc(sizeof(int) * (chunk->max_i + 1));
		if (!(chunk->chunks[j]))
			return ;
		j++;
	}
	init_chunks(a, chunk);
}
