#include "header.h"

int	check_elig(t_stack b, int i)
{
	int *sorted;

	
	if (!(sorted = init_sorted(b)))
	{
		printf("sorted empty");
		return (1);
	}
	if (i == sorted[0] || i == sorted[b.max_i])
		return (1);
	else
		return (0);
}

void	rotate__a_b(t_stack a, t_stack b, int closest, int smallest)
{
	while (closest-- > 0 || smallest-- > 0)
	{
		rotate(&a);
		rotate(&b);
	}
	if (smallest > 0)
	{
		while (smallest-- > 0)
			rotate(&b);
	}
	if (closest > 0)
	{
		while (closest-- > 0)
			rotate(&a);
	}
	
}

void	rrotate__a_b(t_stack a, t_stack b, int closest, int smallest)
{
	while (closest++ < 0 || smallest++ < 0)
	{
		rrotate(&a);
		rrotate(&b);
	}
	if (smallest < 0)
	{
		while (smallest++ < 0)
			rrotate(&b);
	}
	if (closest < 0)
	{
		while (closest++ < 0)
			rrotate(&a);
	}
	
}
/*
void	arrangea_b(t_stack a, t_stack b, int closest)
{
	int *sorted;
	int smallest;
	int i;

	i = 0;
	sorted = init_sorted(b);
	if (b.max_i == -1)
	{
		rotate_ntimes(a, closest);
		return;
	}
	while (b.stack[i++] !=  sorted[0])
		smallest = find_nrotates(i, b.max_i);
	if (closest > 0 && smallest > 0)
		rotate_a_b(a, b, closest, smallest);
	else if (closest < 0 && smallest < 0)
		rrotate_a_b(a, b, closest, smallest);
	rotate_ntimes(a, closest);
	rotate_ntimes(b, smallest);
}*/
