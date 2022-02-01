/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 13:31:04 by tnicoue           #+#    #+#             */
/*   Updated: 2022/02/01 11:59:27 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_verifnorecurse(t_stack *stack_a)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = stack_a;
	tmp2 = tmp->next;
	while (tmp && tmp2)
	{
		while (tmp2 && tmp->content != tmp2->content)
			tmp2 = tmp2->next;
		if (tmp2 != NULL)
			return (0);
		tmp = tmp->next;
		tmp2 = tmp->next;
	}
	return (1);
}

int	ft_verifclean(t_stack *stack_a)
{
	if (ft_verifnorecurse(stack_a) == 0 || ft_verifint(stack_a) == 0)
	{
		write(1, "error", 5);
		return (0);
	}
	return (1);
}

int	ft_chkdigitol(char *str)
{
	int	i;

	i = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
		i++;
	if (str[i] != '\0')
		return (0);
	return (1);
}

int	ft_chklist(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc <= 1)
		return (0);
	while (i < argc)
	{
		if (ft_chkdigitol(argv[i]) == 0)
		{
			write(1, "error", 5);
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_mklist(t_stack **stack_a, int argc, char **argv)
{
	int		i;
	int		y;
	char	**full;

	argc = 0;
	i = 1;
	y = 0;
	while (argv[i])
	{
		full = ft_split(argv[i], ' ');
		while (full[y])
		{
			if (full[y][0] != '0' && ft_atoi(full[y]) == 0)
			{
				write(1, "error", 5);
				return (0);
			}
			ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(full[y])));
			y++;
		}
		i++;
		y = 0;
		free_split(full);
	}
	return (1);
}
