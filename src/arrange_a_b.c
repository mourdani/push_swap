#include "../header.h"


void	rotatea_b(t_stack a, t_stack b, int n_a, int n_b)
{
	while (n_a > 0 && n_b > 0)
	{
		rr(a, b);
		n_a--;
		n_b--;
	}
	rotate_a_ntimes(a, n_a);
	rotate_b_ntimes(b, n_b);
}

void	rrotatea_b(t_stack a, t_stack b, int n_a, int n_b)
{
	while (n_a < -1 && n_b < -1)
	{
		rrr(a, b);
		n_a++;
		n_b++;
	}
	rotate_a_ntimes(a, n_a);
	rotate_b_ntimes(b, n_b);
}
int	find_pos(t_stack a, t_stack b, int n)
{
	int i;

	i = 0;
	while (i <= b.max_i)
	{
		if (a.stack[n] > b.stack[i] && a.stack[n] < b.stack[i+1])
			return (i);
		i++;
	}
	return(i);
}

void	arrange_stacks(t_stack a, t_stack b, int n_a, int n_b)
{
	if (n_a > 0 && n_b > 0)
		rotatea_b(a, b, n_a, n_b);
	else if (n_a < 0 && n_b < 0)
		rrotatea_b(a, b, n_a, n_b);
	else
	{
		rotate_a_ntimes(a, n_a);
		rotate_b_ntimes(b, n_b);
	}
}
int	check_elig(t_stack b, t_stack a, int i)
{
	if (i == a.sorted[0] || i == a.sorted[b.max_i])
		return (1);
	else
		return (0);
}
