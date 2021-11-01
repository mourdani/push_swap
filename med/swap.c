/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:41:20 by mourdani          #+#    #+#             */
/*   Updated: 2021/10/28 09:11:49 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	swap(t_stack *a)
{
	int temp;
	int max_i;

	max_i = a->max_i;
	if (max_i == 0)
		return;
	temp = a->stack[max_i];
	a->stack[max_i] = a->stack[max_i - 1];
	a->stack[max_i - 1] = temp;
	printf("sw\n");
}
