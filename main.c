/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourdani <mourdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 00:59:50 by mourdani          #+#    #+#             */
/*   Updated: 2021/10/20 06:11:02 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>

int	*init_a(int argc, int *a, char **argv)
{
	int i;

	i = 0;
	while (argc > 1)
	 	a[i++] = ft_atoi(argv[argc-- - 1]);
 	a[i] = '\0';
}

int main(int argc, char **argv)
{
	int a[argc];
	int b[argc];
	int j;

	j = argc;
	if (argc == 1)
		return (0);
	init_a(argc, a, argv);
	test(j, a, b);

	return (0);
}
