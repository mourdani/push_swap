#include "../header.h"


//	pushes biggest and smallest number from "a" to "b".
void	get_smallest(t_stack a, t_stack b)
{
	int i;
	int *sorted;

	i = 0;
	sorted = init_sorted(a);
	while (a.stack[i] != sorted[0])
		i++;
	rotate_a_ntimes(a, find_nrotates(i, a.max_i));
}

void	get_biggest(t_stack a, t_stack b)
{
	int i;
	int *sorted;
	
	i = 0;
	sorted = init_sorted(a);
	while (a.stack[i] != sorted[a.max_i])
		i++;
	rotate_a_ntimes(a, find_nrotates(i, a.max_i));
}
