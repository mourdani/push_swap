#include "header.h"

void	push(int *a, int *b)
{
	int max_a;
	int max_b;

	max_a = stack_max_i(a);
	max_b = stack_max_i(b);

	b[max_b + 1] = a[max_a];
	b[max_b + 2] = '\0';
}
