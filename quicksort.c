#include "header.h"

void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int *a.stack, int *b.stack, int low, int high)
{
	int pivot;
	int i;
	int j;
	
	pivot = a.stack[high];
	i = low - 1;
	j = low;
	while (j < high)
	{
		if (a.stack[j] <= pivot)
		{
			i++;
			swap(&a.stack[i], &a.stack[j]);
		}
		j++;
	}
	swap(&a.stack[i + 1], &a.stack[high]);
	return (i + 1);
}

void quickSort(int *a.stack, int *b.stack, int low, int high)
{
	if (low < high)
	{
	int pi;
			
		pi = partition(a.stack, b.stack, low, high);

		quickSort(a.stack, low, pi - 1);
		quickSort(a.stack, pi + 1, high);
	}
}
