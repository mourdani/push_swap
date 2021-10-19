#include "header.h"

int	stack_max_i(int *stack)
{
	int	i;

	i = 0;
	while (stack[i])
		i++;
	return (--i);
}
