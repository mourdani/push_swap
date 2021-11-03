/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 06:37:46 by mourdani          #+#    #+#             */
/*   Updated: 2021/11/03 04:26:55 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	init_a(t_stack a, char **argv)
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

int	**init_chunks(int *sorted, int max_i, int n_chunks)
{
	int s;
	int i;
	int j;
	int **chunk;

	j = 0;
	s = 0;
	if (!(chunk = (int **)malloc(sizeof(int*) * (n_chunks))))
		return (0);
	while (j < n_chunks)
	{
		if (!(chunk[j++] = (int *)malloc(sizeof(int) * (max_i / n_chunks))))
				return (0);
	}
	j = 0;
	while (j < n_chunks)
	{
	i = 0;
		while (i <= (max_i / n_chunks))
			chunk[j][i++] = sorted[s++];
		j++;
	}
	return (chunk);
}


int	check_chunk(int *chunk, int chunk_max, int x)
{
	int i;

	i = 0;
	while(i <= chunk_max)
	{
		if (x == chunk[i])
			return (1);
		i++;
	}
	return (0);
}

//	rotates a n times the stack.
int	rotate_a_ntimes(t_stack stack, int n)
{	
	while (n-- > 0)
		rotate_a(&stack);
	while (n++ < -1)
		rrotate_a(&stack);
	return (n);
}

//	rotates a n times the stack.
int	rotate_b_ntimes(t_stack stack, int n)
{	
	while (n-- > 0)
		rotate_b(&stack);
	while (n++ < -1)
		rrotate_b(&stack);
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
