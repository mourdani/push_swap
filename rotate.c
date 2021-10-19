#include "header.h"

void	rrotate(int *stack)
{
	int	i;
	int	max_i;
	int	temp;

	max_i = stack_max_i(stack);
	i = max_i;
	temp = stack[max_i];
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		i--;
	}
	stack[0] = temp;
}

void	rotate(int *stack)
{
	int	i;
	int	max_i;
	int	temp;

	max_i = stack_max_i(stack);
	i = 0;
	temp = stack[0];
	while (i < max_i)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[max_i] = temp;
}
