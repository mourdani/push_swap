/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmechety <rmechety@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 12:52:24 by rmechety          #+#    #+#             */
/*   Updated: 2021/10/19 15:08:54 by rmechety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER1_H
# define HEADER1_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct t_stack{
	int	*stack;
	int	max_i;
	int	*sorted;
} t_stack;
typedef struct t_chunk{
	int	**chunks;
	int	max_i;
	int	number;
} t_chunk;
/* -------------------------------------------------------------------------- */
/*                      FILE = header/get_h_first_sec.c                       */
/* -------------------------------------------------------------------------- */
int	scan_from_top(t_stack a, t_chunk chunk, int chunk_number);
int	scan_from_bottom(t_stack a, t_chunk chunk, int chunk_number);

/* -------------------------------------------------------------------------- */
/*                            FILE = header/test.c                            */
/* -------------------------------------------------------------------------- */
void	print_stacks(t_stack a, t_stack b);
void	print_stack(int *stack, int max_i);
int 	test(t_stack a, t_stack b);

/* -------------------------------------------------------------------------- */
/*                            FILE = header/swap.c                            */
/* -------------------------------------------------------------------------- */
void	swap(t_stack *a);

/* -------------------------------------------------------------------------- */
/* -------------------------------------------------------------------------- */
/*                      FILE = header/get_h_first_sec.c                       */
/* -------------------------------------------------------------------------- */
int	scan_from_top(t_stack a, t_chunk chunk, int chunk_number);
int	scan_from_bottom(t_stack a, t_chunk chunk, int chunk_number);

/* -------------------------------------------------------------------------- */
/*                            FILE = header/test.c                            */
/* -------------------------------------------------------------------------- */
void	print_stacks(t_stack a, t_stack b);
void	print_stack(int *stack, int max_i);
int 	test(t_stack a, t_stack b);

/* -------------------------------------------------------------------------- */
/*                            FILE = header/swap.c                            */
/* -------------------------------------------------------------------------- */
void	swap(t_stack *a);

/* -------------------------------------------------------------------------- */
/*                    FILE = header/push_swap_fhundered.c                     */
/* -------------------------------------------------------------------------- */
void	push_swap_fhundered(t_stack a, t_stack b, t_chunk chunk);
void	push_swap_hundered(t_stack a, t_stack b, t_chunk chunk);

/* -------------------------------------------------------------------------- */
/*                       FILE = header/pushswap_five.c                        */
/* -------------------------------------------------------------------------- */
void	push_swap_five(t_stack a, t_stack b);

/* -------------------------------------------------------------------------- */
/*                       FILE = header/pushswap_three.c                       */
/* -------------------------------------------------------------------------- */
void	push_swap_three(t_stack a, t_stack b);

/* -------------------------------------------------------------------------- */
/*                           FILE = header/utils.c                            */
/* -------------------------------------------------------------------------- */
void	init_a(t_stack a, char **argv);
void	**init_chunks(t_stack a, t_chunk chunk);
int	check_chunk(int *chunk, int chunk_max, int x);
int	rotate_a_ntimes(t_stack stack, int n);
int	rotate_b_ntimes(t_stack stack, int n);
int	find_nrotates(int n, int max_i);
int	find_closest(t_stack a, int hold_first, int hold_second);
int	ft_atoi(const char *str);

/* -------------------------------------------------------------------------- */
/*                          FILE = header/pushswap.c                          */
/* -------------------------------------------------------------------------- */
void	find_pos_closest_in_b(t_stack a, t_stack b, t_chunk chunk, int j);
void	send_b_to_a(t_stack a, t_stack b);
void	send_smallest_biggest(t_stack a, t_stack b);
void	sort(t_stack a, t_stack b, t_chunk chunk, int max_i);
void	init_chunk(t_chunk *chunk, t_stack a);
void	push_swap(t_stack a, t_stack b, t_chunk chunk);

/* -------------------------------------------------------------------------- */
/*                            FILE = header/push.c                            */
/* -------------------------------------------------------------------------- */
void	push_a(t_stack *a, t_stack *b);
void	push_b(t_stack *a, t_stack *b);

/* -------------------------------------------------------------------------- */
/*                            FILE = header/main.c                            */
/* -------------------------------------------------------------------------- */
int	a_is_sorted(t_stack a);
int main(int argc, char **argv);

/* -------------------------------------------------------------------------- */
/*                        FILE = header/arrange_a_b.c                         */
/* -------------------------------------------------------------------------- */
void	rotatea_b(t_stack a, t_stack b, int n_a, int n_b);
void	rrotatea_b(t_stack a, t_stack b, int n_a, int n_b);
int	find_pos(t_stack a, t_stack b, int n);
void	arrange_stacks(t_stack a, t_stack b, int n_a, int n_b);
int	check_elig(t_stack b, t_stack a, int i);

/* -------------------------------------------------------------------------- */
/*                           FILE = header/rotate.c                           */
/* -------------------------------------------------------------------------- */
void	rotate(t_stack *s);
void	rotate_a(t_stack *s);
void	rotate_b(t_stack *s);
void	rr(t_stack a, t_stack b);
void	rrotate(t_stack *s);
void	rrotate_a(t_stack *s);
void	rrotate_b(t_stack *s);
void	rrr(t_stack a, t_stack b);

/* -------------------------------------------------------------------------- */
/*                       FILE = header/get_big_small.c                        */
/* -------------------------------------------------------------------------- */
void	get_smallest(t_stack a, t_stack b);
void	get_biggest(t_stack a, t_stack b);

/* -------------------------------------------------------------------------- */
/*                         FILE = header/quicksort.c                          */
/* -------------------------------------------------------------------------- */
void	quickswap(int *i, int *j);
int 	partition(int *stack, int low, int high);
int	*quicksort(int *stack, int low, int high);


#endif
