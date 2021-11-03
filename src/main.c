/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 00:59:50 by mourdani          #+#    #+#             */
/*   Updated: 2021/11/03 04:26:18 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"
#include <stdlib.h>

int main(int argc, char **argv)
{
	t_stack a = {(int*)malloc(sizeof(int) * argc - 1), argc - 2};
	t_stack b = {(int*)malloc(sizeof(int) * argc - 1), -1};
	if (argc == 1)
		return (0);
	init_a(a, argv);
	
	if (argc == 4)
		push_swap_three(a, b);
	else if (argc == 6)
		push_swap_five(a, b);
	else if (argc == 101)
		push_swap_hundered(a, b);
	else if (argc == 501)
		push_swap_fhundered(a, b);

	return (0);
}
