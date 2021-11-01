/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:41:09 by mourdani          #+#    #+#             */
/*   Updated: 2021/11/01 05:27:41 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	rotate(t_stack *s)
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
	printf("ra\n");
}

void	rr(t_stack a, t_stack b)
{
	rotate(&a);
	rotate(&b);
	printf("rr\n");
}

void	rrotate(t_stack *s)
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
	printf("rra\n");
}

void	rrr(t_stack a, t_stack b)
{
	rrotate(&a);
	rrotate(&b);
	printf("rrr\n");
}

