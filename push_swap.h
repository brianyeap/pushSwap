/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryeap <bryeap@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:14:33 by brian             #+#    #+#             */
/*   Updated: 2024/08/29 21:39:32 by bryeap           ###   ########.fr       */
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

// Push Swap Utils
void	free_and_error(t_stack_node **a);
int		error_check_string(char *str);


#endif