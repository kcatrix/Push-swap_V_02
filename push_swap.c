/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:41:33 by tnicoue           #+#    #+#             */
/*   Updated: 2022/02/01 12:16:01 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_onsenfou(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}

void	free_split(char **cpy_argv)
{
	char	**tmp;

	tmp = cpy_argv;
	while (*tmp)
		free(*tmp++);
	free(cpy_argv);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_stock stock;
	
	stack_a = NULL;
	stack_b = NULL;
	ft_init_struct(&stock);
	if (ft_chklist(argc, argv) == 0)
		return (0);
	if (ft_mklist(&stack_a, argc, argv) == 0)
		return(0);
	if (ft_verifclean(stack_a) == 0)
		return (0);
	get_size_a(&stack_a, &stock);
	stack_a = ft_replace_nb(&stack_a, &stock);
	ft_print_lst(stack_a);
	/*direction(&stack_a, &stack_b, &stock);
	ft_print_lst(stack_a);
	ft_print_lst(stack_b);*/
}
/*
int	main(int argc, char **argv)
{
	int i;
	t_stack *stack_a;

	i = 0;
	if (argc == 2)
	{
		while (++i < argc)
			ft_lstadd_back(&stack_a, ft_lstnew(ft_atoi(argv[i])));
	}
	ft_verifclean(stack_a);
	ft_print_lst(stack_a);
}*/