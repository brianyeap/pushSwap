/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryeap <bryeap@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:15:16 by bryeap            #+#    #+#             */
/*   Updated: 2024/08/29 21:29:54 by bryeap           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_node	a;
	t_stack_node	b;
	int				i;

	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	argv = argv + 1;
	i = 0;
	while (argv[i])
	{
		printf("argv[%d]: %s\n", i, argv[i]);
		i++;
	}
	return (0);
}
