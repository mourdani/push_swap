#include "header.h"

int	*init_a(int argc, int *a, char **argv)
{
	int i;

	i = 0;
	while (argc > 1)
	 	a[i++] = ft_atoi(argv[argc-- - 1]);
 	a[i] = '\0';
}

int	stack_max_i(int *stack)
{
	int	i;

	i = 0;
	while (stack[i])
		i++;
	return (--i);
}

void	ft_bzero(int *s, int n)
{
	int	i;

	if (!n)
		return ;
	i = 0;
	while (i < n)
		s[i++] = '\0';
}

int		ft_atoi(const char *str)
{
	int		i;
	int		num;
	int		sign;

	i = 0;
	num = 0;
	sign = 1;
	while (*(str + i) == '\n' ||
		*(str + i) == '\t' ||
		*(str + i) == '\r' ||
		*(str + i) == '\v' ||
		*(str + i) == '\f' ||
		*(str + i) == ' ')
		i++;
	if (*(str + i) == '-')
		sign = -1;
	if (*(str + i) == '-' || *(str + i) == '+')
		i++;
	while (*(str + i) && *(str + i) >= '0' && *(str + i) <= '9')
		num = num * 10 + (*(str + i++) - '0');
	return (num * sign);
}
