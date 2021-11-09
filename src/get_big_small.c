#include "../header.h"


//	pushes biggest and smallest number from "a" to "b".
void	get_smallest(t_stack a, t_stack b)
{
	int i;

	i = 0;
	while (a.stack[i] != a.sorted[0])
		i++;
	rotate_a_ntimes(a, find_nrotates(i, a.max_i));
}

void	get_biggest(t_stack a, t_stack b)
{
	int i;
	
	i = 0;
	while (a.stack[i] != a.sorted[a.max_i + 1])
		i++;
	rotate_a_ntimes(a, find_nrotates(i, a.max_i));
}
