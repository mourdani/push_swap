#include "header.h"


//	pushes biggest and smallest number from "a" to "b".
void	push_b_s(t_stack a, t_stack b)
{
	int i;
	int *sorted;

	i = 0;
	sorted = init_sorted(a);
	while (a.stack[i] != sorted[0])
	{
		i++;
	}
	rotate_ntimes(a, find_nrotates(i, a.max_i));
	push(&a, &b);
	i = 0;
	while (a.stack[i] != sorted[a.max_i + 1])
	{
		i++;
	}
	rotate_ntimes(a, find_nrotates(i, a.max_i));
	push(&a, &b);
}

//	finds position of a[closest] inside of stack b.
int	find_pos(t_stack a, t_stack b, int closest)
{
	int i;

	i = 0;
	while (i <= b.max_i)
	{
		if (a.stack[closest] > b.stack[i] && a.stack[closest] < b.stack[i+1])
			return (i);
		i++;
	}
	return(i);
}

