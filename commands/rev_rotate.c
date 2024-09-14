/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 23:01:37 by brian             #+#    #+#             */
/*   Updated: 2024/09/15 00:08:01 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void rev_rotate(t_stack_node **stack)
{
	t_stack_node *last;

	if (!*stack || (*stack)->next)
		return;
	last = find_last(*stack);
	last->prev->next = NULL;
	last->next = *stack;
	last->prev = NULL;
	*stack = last;
	last->next->prev = last;
}

void	rra(t_stack_node **node, bool print)
{
	rev_rotate(node);
	if (print)
		ft_putstr("rra\n");
}

void	rrb(t_stack_node **node, bool print)
{
	rev_rotate(node);
	if (print)
		ft_putstr("rrb\n");
}

void	rrr(t_stack_node **a, t_stack_node **b, bool print)
{
	rev_rotate(a);
	rev_rotate(b);
	if (print)
		ft_putstr("rrr\n");
}