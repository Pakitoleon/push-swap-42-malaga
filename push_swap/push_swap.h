/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:16:30 by @fgonzal2         #+#    #+#             */
/*   Updated: 2024/05/30 11:55:43 by fgonzal2         ###   ########.fr       */
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
	struct s_stack	*next;
	struct s_stack	*prev;
	struct s_stack	*sort;	
}	t_stack;


void		free_array(char **arr);

#endif