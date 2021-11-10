#include "../includes/header.h"

int	scan_from_top(t_stack *a, t_chunk chunk, int chunk_number)
{
	int	i;

	i = a->max_i;
	while (i >= 0 )
	{
		if (check_chunk(chunk.chunks[chunk_number],
				chunk.max_i, a->stack[i]) == 1)
			return (i);
		i--;
	}
	return (0);
}

int	scan_from_bottom(t_stack *a, t_chunk chunk, int chunk_number)
{
	int	i;

	i = 0;
	while (i <= a->max_i)
	{
		if (check_chunk(chunk.chunks[chunk_number],
				chunk.max_i, a->stack[i]) == 1)
			return (i);
		i++;
	}
	return (0);
}
