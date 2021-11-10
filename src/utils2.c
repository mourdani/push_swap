#include "../includes/header.h"

void	find_pos_closest_in_b(t_stack *a, t_stack *b, t_chunk chunk, int j)
{
	int	n_a;
	int	n_b;
	int	hold_first;
	int	hold_second;
	int	closest;

	hold_first = scan_from_top(a, chunk, j);
	hold_second = scan_from_bottom(a, chunk, j);
	closest = hold_first;
	if (find_nrotates(hold_first, a->max_i)
		> find_nrotates(hold_second, a->max_i))
		closest = hold_second;
	n_a = find_nrotates(closest, a->max_i);
	n_b = find_nrotates(find_pos(a, b, closest), b->max_i);
	arrange_stacks(a, b, n_a, n_b);
}

void	send_b_to_a(t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	while (b->stack[i] != a->sorted[b->max_i])
		i++;
	rotate_b_ntimes(b, find_nrotates(i, b->max_i));
	i = b->max_i;
	while (i-- >= 0)
		push_b(b, a);
}

void	send_smallest_biggest(t_stack *a, t_stack *b)
{
	get_smallest(a);
	push_a(a, b);
	get_biggest(a);
	push_a(a, b);
}

void	sort_stacks(t_stack *a, t_stack *b, t_chunk chunk, int max_i)
{
	int	i;
	int	j;

	j = -1;
	while (j++ < chunk.number && b->max_i < max_i)
	{
		i = -1;
		while (i++ <= chunk.max_i && b->max_i < max_i)
		{
			find_pos_closest_in_b(a, b, chunk, j);
			push_a(a, b);
		}
	}
}
