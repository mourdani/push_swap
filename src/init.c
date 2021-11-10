#include "../includes/header.h"

void	init_a(t_stack a, char **argv)
{
	int	i;
	int	j;
	int	*temp;

	i = 0;
	j = a.max_i + 1;
	while (j > 0)
		a.stack[i++] = ft_atoi(argv[j--]);
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
