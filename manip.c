#include "header.h"

int	stack_max_i(int *stack)
{
	int i;

	i = 0;
	while (stack[i])
		i++;
	return (--i);
}

void	swap(int *stack)
{
	int temp;
	int max_i;

	max_i = stack_max_i(stack);
	temp = stack[max_i];
	stack[max_i] = stack[max_i - 1];
	stack[max_i - 1] = temp;
}
