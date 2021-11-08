#include "../header.h"

void	quickswap(int *i, int *j)
{
	int temp;

	temp = *i;
	*i = *j;
	*j = temp;
}

int 	partition(int *stack, int low, int high)
{
	int pivot;
	int i;
	int j;

	pivot = stack[high];
	i = low - 1;
	j = low;
	while (j < high)
	{
		if (stack[j] <= pivot)
		{
			i++;
			quickswap(&stack[i], &stack[j]);
		}
		j++;
	}
	quickswap(&stack[i + 1], &stack[high]);
	return (i + 1);
}

int	*quicksort(int *stack, int low, int high)
{
	if (low < high)
	{
	int pi;

		pi = partition(stack, low, high);
		quicksort(stack, low, pi - 1);
		quicksort(stack, pi + 1, high);
	}
	return (stack);
}

