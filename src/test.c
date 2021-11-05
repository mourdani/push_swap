#include "../header.h"
#include <stdio.h>
#include <stdlib.h>

void	print_stacks(t_stack a, t_stack b)
{
	int i;

	i = b.max_i;
	if (a.max_i > b.max_i)
		i = a.max_i;
	while ( i >= 0)
	{

		printf("a[%d] = %d 	|	", i, a.stack[i]);
		printf("b[%d] = %d\n", i, b.stack[i]);
		i--;
	}
}

void	print_stack(int *stack, int max_i)
{
	int i;

	i = max_i;
	while (i >= 0)
	{
		printf("stack[%d] = %d\n", i, stack[i]);
		i--;
	}
}

int 	test(t_stack a, t_stack b)
{
	int i;
	int j;
	int n;
	int *sorted;
	int **chunk;


	i = 0;
	j = a.max_i;
	n = 3;
//	printf("=============|original stack 'a'|=============\n");
//	printf("a.max_i = %d 	|\n", a.max_i);
//	print_stacks(a, b);

//	printf("=============|	sorted	|=============\n");

//	print_stack(chunk[0], 18);
//	i = scan_from_top(a, chunk);
//	printf("hold first = %d\n", i);
//	push_swap(a, b);
	//print_stacks(a, b);
	//printf("a.max = %d\nb.max = %d\n", a.max_i, b.max_i);
	return (0);
}
