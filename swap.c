#include "header.h"

void	swap(int *stack)
{
	int temp;
	int max_i;

	max_i = stack_max_i(stack);
	if (max_i == 0)
		return;
	temp = stack[max_i];
	stack[max_i] = stack[max_i - 1];
	stack[max_i - 1] = temp;
}
