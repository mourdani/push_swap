#include "header.h"

//	rotates n times the stack.
int	rotate_ntimes(t_stack stack, int n)
{	
	while (n-- > 0)
		rotate(&stack);
	while (n++ < -1)
		rrotate(&stack);
	return (n);
}

//	finds number of rotates (+) or rrotates (-) to get "n" to max_i.
int	find_nrotates(int n, int max_i)
{
	int i;

	if (n == max_i)
		return (0);
	if (n == 0)
		return (-1);
	if (n >= (max_i / 2))
	{
		i = 0;
		while (n++ < max_i)
			i++;
		return (i);
	}

	else if (n <= (max_i / 2))
	{
		i = 0;
		while (n-- >= 0)
			i--;
		return (i);
	}
}

//	compares hold_first and hold_second and returns number of rotates to
//	get the closest to the top of the stack (max_i).
int	find_closest(t_stack a, int hold_first, int hold_second)
{
	int n_first;
	int n_second;
	int n_closest;

	n_first = find_nrotates(hold_first, a.max_i);
	n_second = find_nrotates(hold_second, a.max_i);
	n_closest = n_first;
	if ((n_first * n_first) > (n_second * n_second))
		n_closest = n_second;
	return (n_closest);
}
