#include "../includes/header.h"

void	rotate_b(t_stack *s)
{
	int	i;
	int	temp;

	i = s->max_i;
	temp = s->stack[s->max_i];
	while (i > 0)
	{
		s->stack[i] = s->stack[i - 1];
		i--;
	}
	s->stack[0] = temp;
	ft_putstr("rb\n");
}

void	rrotate_b(t_stack *s)
{
	int	i;
	int	temp;

	i = 0;
	temp = s->stack[0];
	while (i < s->max_i)
	{
		s->stack[i] = s->stack[i + 1];
		i++;
	}
	s->stack[s->max_i] = temp;
	ft_putstr("rrb\n");
}

int	rotate_b_ntimes(t_stack *stack, int n)
{
	while (n-- > 0)
		rotate_b(stack);
	while (n++ < -1)
		rrotate_b(stack);
	return (n);
}
