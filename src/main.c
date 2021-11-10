/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 00:59:50 by mourdani          #+#    #+#             */
/*   Updated: 2021/11/10 12:19:10 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void	free_all(t_stack *a, t_stack *b, t_chunk *chunk)
{
	int		j;

	j = 0;
	while (j < chunk->number)
	{
		free(chunk->chunks[j]);
		j++;
	}
	free(chunk->chunks);
	free(a->stack);
	free(a->sorted);
	free(b->stack);
}

int	a_is_sorted(t_stack a)
{
	int	i;
	int	j;

	i = 0;
	j = a.max_i;
	while (i <= a.max_i)
	{
		if (a.stack[i] != a.sorted[j])
			return (0);
		i++;
		j--;
	}
	return (1);
}

void	sort(t_stack *a, t_stack *b, t_chunk chunk)
{
	if (a->max_i == 1)
		sort_two(a);
	else if (a->max_i == 2)
		sort_three(a);
	else if (a->max_i == 3)
		sort_four(a, b);
	else if (a->max_i == 4)
		sort_five(a, b);
	else
		sort_others(a, b, chunk);
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	t_chunk	chunk;

	malloc_a_b(&a, &b, argc);
	init_a_b(a, b, argv);
	if (check_error(argv, argc, a))
		return (0);
	if (argc == 1 || argc == 2 || a_is_sorted(a) == 1)
		return (0);
	malloc_chunks(a, &chunk);
	sort(&a, &b, chunk);
	free_all(&a, &b, &chunk);
	return (0);
}
