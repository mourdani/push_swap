/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 07:55:42 by mourdani          #+#    #+#             */
/*   Updated: 2021/11/08 14:42:53 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	push_swap_three(t_stack a, t_stack b)
{
	if (a.stack[0] > a.stack[1] && a.stack[1] < a.stack[2] && a.stack[2] < a.stack[0])
		swap(&a);
	else if (a.stack[0] < a.stack[1] && a.stack[1] < a.stack[2] && a.stack[2] > a.stack[0])
	{
		swap(&a);
		rrotate_a(&a);
	}
	else if (a.stack[0] > a.stack[1] && a.stack[1] < a.stack[2] && a.stack[2] > a.stack[0])
		rotate_a(&a);
	else if (a.stack[0] < a.stack[1] && a.stack[1] > a.stack[2] && a.stack[2] < a.stack[0])
	{
		swap(&a);
		rotate_a(&a);
	}
	else if (a.stack[0] < a.stack[1] && a.stack[1] > a.stack[2] && a.stack[2] > a.stack[0])
		rrotate_a(&a);
}
