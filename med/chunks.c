#include "header.h"


int	**init_chunks(int *sorted, int max_i, int n_chunks)
{
	int s;
	int i;
	int j;
	int **chunk;

	j = 0;
	s = 0;
	if (!(chunk = (int **)malloc(sizeof(int*) * (n_chunks))))
		return (0);
	while (j < n_chunks)
	{
		if (!(chunk[j++] = (int *)malloc(sizeof(int) * (max_i / n_chunks))))
				return (0);
	}
	j = 0;
	while (j < n_chunks)
	{
	i = 0;
		while (i <= (max_i / n_chunks))
			chunk[j][i++] = sorted[s++];
		j++;
	}
	return (chunk);
}


int	check_chunk(int *chunk, int chunk_max, int x)
{
	int i;

	i = 0;
	while(i <= chunk_max)
	{
		if (x == chunk[i])
			return (1);
		i++;
	}
	return (0);
}
