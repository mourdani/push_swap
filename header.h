/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmechety <rmechety@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 12:52:24 by rmechety          #+#    #+#             */
/*   Updated: 2021/11/05 05:35:40 by mourdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <stdlib.h>
#include <stdio.h>

typedef struct t_stack{
	int *stack;
	int max_i;
} t_stack;

typedef struct t_chunk{
	int	**chunks;
	int	number;
	int	max_i;
} t_chunk;


t_chunk	init_chunk(t_chunk chunk, t_stack a, int *sorted);
void	send_smallest_biggest(t_stack a, t_stack b);
void	send_b_to_a(t_stack a, t_stack b, int *sorted);
void	send_smallest_biggest(t_stack a, t_stack b);
void	find_pos_closest_in_b(t_stack a, t_stack b, t_chunk chunk, int j);
void	sort(t_stack a, t_stack b, t_chunk chunk, int max_i, int *sorted);

void	rotate(t_stack *s);
void	rotate_b(t_stack *s);
void	rotate_a(t_stack *s);
void	rr(t_stack a, t_stack b);
void	rrotate(t_stack *s);
void	rrotate_a(t_stack *s);
void	rrotate_b(t_stack *s);
void	rrr(t_stack a, t_stack b);
void	push_a(t_stack *a, t_stack *b);
void	push_b(t_stack *a, t_stack *b);
void	swap(t_stack *a);

void	init_a(t_stack a, char **argv);
int	*init_sorted(t_stack a);
int	ft_atoi(const char *str);

int	**init_chunks(int *sorted, int max_i, int n_chunks);
int	check_chunk(int *chunk, int chunk_max, int x);

void	push_swap_three(t_stack a, t_stack b);
void	push_swap_five(t_stack a, t_stack b);
void	push_swap_hundered(t_stack a, t_stack b);
void	push_swap_fhundered(t_stack a, t_stack b);
void	push_swap(t_stack a, t_stack b);
void	find_pos_closest_in_b(t_stack a,t_stack b, t_chunk chunk, int j);
void	send_b_to_a(t_stack a, t_stack b, int *sorted);

int	scan_from_top(t_stack a, t_chunk chunk, int chunk_number);
int	scan_from_bottom(t_stack a, t_chunk chunk, int chunk_number);

void	get_smallest(t_stack a, t_stack b);
void	get_biggest(t_stack a, t_stack b);
int	find_pos(t_stack a, t_stack b, int n);
void	arrange_stacks(t_stack a, t_stack b, int n_a, int n_b);
void	rotatea_b(t_stack a, t_stack b, int n_a, int n_b);
void	rrotatea_b(t_stack a, t_stack b, int n_a, int n_b);

int	rotate_a_ntimes(t_stack t_stack, int n);
int	rotate_b_ntimes(t_stack t_stack, int n);
int	find_nrotates(int n, int max);
int	find_closest(t_stack a, int hold_first, int hold_second);

int	check_elig(t_stack b, int i);

int partition(int *stack, int low, int high);
int *quicksort(int *stack, int low, int high);
void quickswap(int *i, int *j);

int main(int argc, char **argv);

int 	test(t_stack a, t_stack b);
void	print_stacks(t_stack a, t_stack b);
void	print_stack(int *stack, int max_i);

#endif
