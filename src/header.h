/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmechety <rmechety@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 12:52:24 by rmechety          #+#    #+#             */
/*   Updated: 2021/10/20 04:30:44 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <stddef.h>

/* -------------------------------------------------------------------------- */
/*                            FILE = src/rotate.c                             */
/* -------------------------------------------------------------------------- */
void	rrotate(int *stack);
void	rotate(int *stack);

/* -------------------------------------------------------------------------- */
/*                             FILE = src/utils.c                             */
/* -------------------------------------------------------------------------- */
int	*init_a(int argc, int *a, char **argv);
int	stack_max_i(int *stack);
void	ft_bzero(int *s, int n);
int		ft_atoi(const char *str);

/* -------------------------------------------------------------------------- */
/*                             FILE = src/push.c                              */
/* -------------------------------------------------------------------------- */
void	push(int *a, int *b);

/* -------------------------------------------------------------------------- */
/*                             FILE = src/swap.c                              */
/* -------------------------------------------------------------------------- */
void	swap(int *stack);

/* -------------------------------------------------------------------------- */
/*                             FILE = src/main.c                              */
/* -------------------------------------------------------------------------- */
int main(int argc, char **argv);

/* -------------------------------------------------------------------------- */
/*                             FILE = src/test.c                              */
/* -------------------------------------------------------------------------- */
int 	test(int argc, int* a, int *b);


#endif