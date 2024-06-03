/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:16:30 by @fgonzal2         #+#    #+#             */
/*   Updated: 2024/06/03 13:39:17 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

typedef struct s_stack
{
	int				content;
	int				index;
	int				cost;
	int				is_upper;
	int				is_down;
	int				is_mid;
	struct s_stack	*next;
	struct s_stack	*prev;
	struct s_stack	*sort;	
}	t_stack;

#define	INT_MAX	2147483647;
#define	INT_MIN	-2147483648;

void	swap(t_stack **stack);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	rotate(t_stack **stack);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rrotate(t_stack **stack);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	push(t_stack **origin, t_stack **target);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
t_stack	*ft_last_stack(t_stack *stack);
int		ft_stack_size(t_stack *stack);
int		ft_min(t_stack *stack);
int		ft_max(t_stack *stack);
void	ft_print_error(void);
int		mx(int x, int y);
void	ft_stack_free(t_stack **stack);
void	free_array(char **arr);
int		ft_find_index(t_stack *a, int nbr);
int		ft_find_place_b(t_stack *stack_b, int nbr_push);
int		ft_find_place_a(t_stack *stack_a, int nbr_push);
int 	ft_streln(const char *str);
void	ft_putstr_fd(char *s, int fd);
long	ft_atol(const char *stack);
void	ft_add_back(t_stack **stack, t_stack *stack_new);

#endif