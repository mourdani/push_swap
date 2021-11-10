/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmechety <rmechety@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 12:52:24 by rmechety          #+#    #+#             */
/*   Updated: 2021/11/09 14:29:06 by ymehdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct t_stack{
	int	*stack;
	int	max_i;
	int	*sorted;
}t_stack;

typedef struct t_chunk{
	int	**chunks;
	int	max_i;
	int	number;
}t_chunk;
/* -------------------------------------------------------------------------- */
/*                      FILE = header/get_h_first_sec.c                       */
/* -------------------------------------------------------------------------- */
int		scan_from_top(t_stack *a, t_chunk chunk, int chunk_number);
int		scan_from_bottom(t_stack *a, t_chunk chunk, int chunk_number);
/* -------------------------------------------------------------------------- */
/*                            FILE = header/test.c                            */
/* -------------------------------------------------------------------------- */
void	print_stacks(t_stack *a, t_stack *b);
void	priprint_stack(int *stack, int max_i);
int		pritest(t_stack *a, t_stack *b);
/* -------------------------------------------------------------------------- */
/*                            FILE = header/swap.c                            */
/* -------------------------------------------------------------------------- */
void	swap(t_stack *a);
void	swap_b(t_stack *a);
/* -------------------------------------------------------------------------- */
/*                      FILE = header/get_h_first_sec.c                       */
/* -------------------------------------------------------------------------- */
int		scan_from_top(t_stack *a, t_chunk chunk, int chunk_number);
int		scan_from_bottom(t_stack *a, t_chunk chunk, int chunk_number);
/* -------------------------------------------------------------------------- */
/*                    FILE = header/push_swap_fhundered.c                     */
/* -------------------------------------------------------------------------- */
void	sort_fhundered(t_stack *a, t_stack *b, t_chunk chunk);
void	sort_hundered(t_stack *a, t_stack *b, t_chunk chunk);
void	sort_others(t_stack *a, t_stack *b, t_chunk chunk);
void	sort_five(t_stack *a, t_stack *b);
void	sort_three(t_stack *a);
void	sort_two(t_stack *a);
/* -------------------------------------------------------------------------- */
/*                           FILE = header/utils.c                            */
/* -------------------------------------------------------------------------- */
void	init_a(t_stack a, char **argv);
void	init_chunks(t_stack a, t_chunk *chunk);
int		check_chunk(int *chunk, int chunk_max, int x);
int		rotate_a_ntimes(t_stack *stack, int n);
int		rotate_b_ntimes(t_stack *stack, int n);
int		find_nrotates(int n, int max_i);
int		find_closest(t_stack *a, int hold_first, int hold_second);
int		ft_atoi(const char *str);
/* -------------------------------------------------------------------------- */
/*                          FILE = header/pushswap.c                          */
/* -------------------------------------------------------------------------- */
void	find_pos_closest_in_b(t_stack *a, t_stack *b, t_chunk chunk, int j);
void	send_b_to_a(t_stack *a, t_stack *b);
void	send_smallest_biggest(t_stack *a, t_stack *b);
void	sort_stacks(t_stack *a, t_stack *b, t_chunk chunk, int max_i);
void	init_chunk(t_chunk *chunk, t_stack a);
/* -------------------------------------------------------------------------- */
/*                            FILE = header/push.c                            */
/* -------------------------------------------------------------------------- */
void	push_a(t_stack *a, t_stack *b);
void	push_b(t_stack *a, t_stack *b);
/* -------------------------------------------------------------------------- */
/*                            FILE = header/main.c                            */
/* -------------------------------------------------------------------------- */
int		a_is_sorted(t_stack a);
void	malloc_a_b(t_stack *a, t_stack *b, int argc);
int		main(int argc, char **argv);
/* -------------------------------------------------------------------------- */
/*                        FILE = header/arrange_a_b.c                         */
/* -------------------------------------------------------------------------- */
void	rotatea_b(t_stack *a, t_stack *b, int n_a, int n_b);
void	rrotatea_b(t_stack *a, t_stack *b, int n_a, int n_b);
int		find_pos(t_stack *a, t_stack *b, int n);
void	arrange_stacks(t_stack *a, t_stack *b, int n_a, int n_b);
int		check_elig(t_stack *b, t_stack *a, int i);
/* -------------------------------------------------------------------------- */
/*                           FILE = header/rotate.c                           */
/* -------------------------------------------------------------------------- */
void	rotate(t_stack *s);
void	rotate_a(t_stack *s);
void	rotate_b(t_stack *s);
void	rr(t_stack *a, t_stack *b);
void	rrotate(t_stack *s);
void	rrotate_a(t_stack *s);
void	rrotate_b(t_stack *s);
void	rrr(t_stack *a, t_stack *b);
/* -------------------------------------------------------------------------- */
/*                       FILE = header/get_big_small.c                        */
/* -------------------------------------------------------------------------- */
void	get_smallest(t_stack *a);
void	get_biggest(t_stack *a);
/* -------------------------------------------------------------------------- */
/*                         FILE = header/quicksort.c                          */
/* -------------------------------------------------------------------------- */
void	quickswap(int *i, int *j);
int		partition(int *stack, int low, int high);
int		*quicksort(int *stack, int low, int high);
void	ft_putstr(char *s);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_atoi_err(const char *str);
int		check_error(char **argv, int argc, t_stack a);
void	sort(t_stack *a, t_stack *b, t_chunk chunk);

#endif