/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace_arg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevyn <kevyn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:12:52 by kevyn             #+#    #+#             */
/*   Updated: 2022/01/29 14:19:03 by kevyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int	ft_get_index_min(int *tab, int size)
{
	int	index;
	int	index_save;
	int	min;

	index = 0;
	index_save = 0;
	min = tab[0];
	while (index < size)
	{
		if (min > tab[index])
		{
			min = tab[index];
			index_save = index;
		}
		index++;
	}
	return (index_save);
}

int	ft_is_all_max(int *tab, int size, int max)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (max != tab[i])
			return (0);
		i++;
	}
	return (1);
}

int	*ft_nb_in_tab(t_stack *p)
{
	int		*tab;
	int		i;
	t_stack	*lst;

	tab = ft_calloc(sizeof(int), p->size_a);
	i = 0;
	lst = p->a;
	while (i < p->size_a)
	{
		tab[i] = lst->content;
		i++;
		lst = lst->next;
	}
	return (tab);
}

int	*ft_tab_replace(t_stack *p, int *tab)
{
	int	*lst;
	int	m;
	int	i;
	int	i_max;
	int	num;

	lst = ft_calloc(sizeof(int), stock->size_a);
	num = 1;
	m = max(p->a);
	i_max = ft_get_index(p->a, m);
	while (num <= p->size_a)
	{
		i = ft_get_index_min(tab, p->size_a);
		if (ft_is_all_max(tab, p->size_a, m))
			lst[i_max] = num;
		else
			lst[i] = num;
		tab[i] = m;
		num++;
	}
	free(tab);
	return (lst);
}

t_stack	*ft_replace_nb(t_stack *stack_a, t_stock *stock)
{
	t_stack	*start;
	int		i;
	int		*tab;

	tab = ft_tab_replace(stack_a, ft_nb_in_tab(stack_a));
	i = 0;
	lstclear(&stack_a);
	start = newlst(tab[i]);
	i++;
	while (i < stock->size_a)
	{
		lstadd_back(&start, newlst(tab[i]));
		i++;
	}
	free(tab);
	return (start);
}
