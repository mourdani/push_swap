#include "header.h"

//	scans from top of stack a and returns first number that belongs 
//	to chunk[chunk_number].
int	scan_from_top(t_stack a, int **chunk, int chunk_number)
{
	int i;

	i = a.max_i;
	while (i >= 0 )
	{
		if (check_chunk(chunk[chunk_number], 19, a.stack[i]) == 1)
			return (i);
		i--;
	}
	return (0);
}

//	scans from bottom of stack a and returns first number that belongs 
//	to chunk[chunk_number].
int	scan_from_bottom(t_stack a, int **chunk, int chunk_number)
{
	int i;

	i = 0;
	while (i <= a.max_i )
	{
		if (check_chunk(chunk[chunk_number], 19, a.stack[i]) == 1)
			return (i);
		i++;
	}
	return (0);
}
