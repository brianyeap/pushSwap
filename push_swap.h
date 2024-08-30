/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:14:33 by brian             #+#    #+#             */
/*   Updated: 2024/08/30 04:13:59 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

// temporary
# include <stdio.h>

typedef struct s_stack_node
{
	int						nbr;
	int						index;
	int						push_cost;
	bool					above_median;
	bool					cheapest;
	struct s_stack_node		*target_node;
	struct s_stack_node		*next;
	struct s_stack_node		*prev;	
}	t_stack_node;

// Libft Utils
void	ft_putstr(char *s);
char	**ft_split(char const *s, char c);

// Push Swap
void	free_and_error(t_stack_node **a);
int		error_check_string(char *str);
int		error_check_duplicate(t_stack_node *a, int n);
bool	is_stack_sorted(t_stack_node *stack);
int		len_stack(t_stack_node	*node);


// Push Swap
void	init_stack_a(t_stack_node **a, char **argv);


#endif