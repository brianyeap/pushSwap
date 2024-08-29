/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:14:33 by brian             #+#    #+#             */
/*   Updated: 2024/08/29 17:40:35 by brian            ###   ########.fr       */
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
    int 					index;
    int 					push_cost;
    bool 					above_median;
    bool 					cheapest;
	struct	s_stack_node 	*target_node;
	struct	s_stack_node 	*next;
	struct	s_stack_node 	*prev;	
} t_stack_node;

// Utils
char	**ft_split(char const *s, char c);

#endif