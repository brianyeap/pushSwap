#include "./push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack_node	a;
	t_stack_node	b;
	int i;

	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return 1;
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');

	i = 0;
	while (argv[i])
	{
		printf("argv[%d]: %s\n", i, argv[i]);
		i++;
	}
	
	return (0);
}