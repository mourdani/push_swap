/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 06:37:46 by mourdani          #+#    #+#             */
/*   Updated: 2021/10/31 02:46:55 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	*init_a(t_stack a, char **argv)
{
	int i;
	int j;

	i = 0;
	j = a.max_i + 1;
	while (j > 0)
	 	a.stack[i++] = ft_atoi(argv[j--]);
 	a.max_i = --i;
}

int	*init_sorted(t_stack a)
{
	t_stack temp;
	int *sorted;
	int i;
	
	if (!a.stack)
		return (0);	
	if (!(temp.stack = (int*)malloc(sizeof(int) * a.max_i)))
		return (0);
	temp.max_i = a.max_i;
	i = 0;
	while (i <= a.max_i)
	{
		temp.stack[i] = a.stack[i];
		i++;
	}
	sorted = quicksort(temp.stack, 0, temp.max_i);
	return (sorted);
}

int	ft_atoi(const char *str)
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
