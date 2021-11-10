#include "../includes/header.h"

int	ft_atoi_err(const char *str)
{
	int		i;
	long	num;
	int		sign;

	i = 0;
	num = 0;
	sign = 1;
	while (*(str + i) == '\n' || *(str + i) == '\t'
		|| *(str + i) == '\r' || *(str + i) == '\v'
		|| *(str + i) == '\f' || *(str + i) == ' ')
		i++;
	if (*(str + i) == '-')
		sign = -1;
	if (*(str + i) == '-' || *(str + i) == '+')
		i++;
	while (*(str + i))
	{
		 if (!(*(str + i) >= '0' && *(str + i) <= '9'))
			 return (1);
		 num = num * 10 + (*(str + i++) - '0');
	}
	if ((num * sign) > 2147483647 || (num * sign) < -2147483648)
		return (1);
	return (0);
}

int	check_duplicate(t_stack a)
{
	int	i;
	int	j;

	j = 0;
	while (j <= a.max_i)
	{
		i = 0;
		while (i <= a.max_i)
		{
			if (a.stack[i] == a.stack[j] && i != j)
				return (1);
			i++;
		}
		j++;
	}
	return (0);
}

int	check_error(char **argv, int argc, t_stack a)
{
	int	i;

	i = 1;
	while (i <= argc - 1)
	{
		if (ft_atoi_err(argv[i]) == 1)
		{
			ft_putstr("Error\n");
			return (1);
		}
		i++;
	}
	if (check_duplicate(a) == 1)
	{
		ft_putstr("Error\n");
		return (1);
	}
	return (0);
}
