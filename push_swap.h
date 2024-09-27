/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryeap <bryeap@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:14:33 by brian             #+#    #+#             */
/*   Updated: 2024/09/27 22:29:48 by bryeap           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

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
void			ft_putstr(char *s);
char			**ft_split(char const *s, char c);

// Free and error
void			free_and_error(t_stack_node **a);
int				error_check_string(char *str);
int				error_check_duplicate(t_stack_node *a, int n);
void			free_stack(t_stack_node **a);

// Utils
void			min_on_top(t_stack_node **a);	
bool			is_stack_sorted(t_stack_node *stack);
int				len_stack(t_stack_node	*node);
t_stack_node	*find_last(t_stack_node *stack);
t_stack_node	*find_max(t_stack_node *stack);
t_stack_node	*find_min(t_stack_node *stack);
t_stack_node	*get_cheapest_node(t_stack_node	*stack);

// Commands
void			sa(t_stack_node **node, bool print);
void			ra(t_stack_node **node, bool print);
void			rb(t_stack_node **node, bool print);
void			rr(t_stack_node **a, t_stack_node **b, bool print);
void			rra(t_stack_node **node, bool print);
void			rrb(t_stack_node **node, bool print);
void			rrr(t_stack_node **a, t_stack_node **b, bool print);
void			pa(t_stack_node **a, t_stack_node **b, bool print);
void			pb(t_stack_node **a, t_stack_node **b, bool print);

// Algo and prep for push
void			init_stack_a(t_stack_node **a, char **argv);
void			init_nodes_a(t_stack_node *a, t_stack_node *b);
void			init_nodes_b(t_stack_node *a, t_stack_node *b);
void			sort_three_node(t_stack_node	**a);
void			current_index(t_stack_node *stack);
void			prep_for_push(t_stack_node **stack,
					t_stack_node *top_node, char stack_type);
void			sort_stacks(t_stack_node **a, t_stack_node **b);
#endif