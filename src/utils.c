/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 06:37:46 by mourdani          #+#    #+#             */
/*   Updated: 2021/11/09 14:30:02 by ymehdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int	check_chunk(int *chunk, int chunk_max, int x)
{
	int	i;

	i = 0;
	while (i <= chunk_max)
	{
		if (x == chunk[i])
			return (1);
		i++;
	}
	return (0);
}

int	find_nrotates(int n, int max_i)
{
	int	i;

	i = 0;
	if (n == max_i)
		return (0);
	if (n == 0)
		return (-1);
	if (n >= (max_i / 2))
	{
		while (n++ < max_i)
			i++;
		return (i);
	}
	else if (n <= (max_i / 2))
	{
		while (n-- >= 0)
			i--;
		return (i);
	}
	return (i);
}

int	find_closest(t_stack *a, int hold_first, int hold_second)
{
	int	n_first;
	int	n_second;
	int	n_closest;

	n_first = find_nrotates(hold_first, a->max_i);
	n_second = find_nrotates(hold_second, a->max_i);
	n_closest = n_first;
	if ((n_first * n_first) > (n_second * n_second))
		n_closest = n_second;
	return (n_closest);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		num;
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
	while (*(str + i) && *(str + i) >= '0' && *(str + i) <= '9')
		 num = num * 10 + (*(str + i++) - '0');
	return (num * sign);
}
