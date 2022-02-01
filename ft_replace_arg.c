/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace_arg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:12:52 by kevyn             #+#    #+#             */
/*   Updated: 2022/02/01 12:06:29 by kcatrix          ###   ########.fr       */
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

int	*ft_nb_in_tab(t_stack *p, t_stock *stock)
{
	int		*tab;
	int		i;
	t_stack	*lst;

	tab = ft_calloc(sizeof(int), stock->size_a);
	i = 0;
	lst = p;
	while (i < stock->size_a)
	{
		tab[i] = lst->content;
		i++;
		lst = lst->next;
	}
	return (tab);
}

int	*ft_tab_replace(t_stack *p, int *tab, t_stock *stock)
{
	int	*lst;
	int	m;
	int	i;
	int	i_max;
	int	num;

	lst = ft_calloc(sizeof(int), stock->size_a);
	num = 1;
	m = max(p);
	i_max = ft_get_index(p, m);
	while (num <= stock->size_a)
	{
		i = ft_get_index_min(tab, stock->size_a);
		if (ft_is_all_max(tab, stock->size_a, m))
			lst[i_max] = num;
		else
			lst[i] = num;
		tab[i] = m;
		num++;
	}
	free(tab);
	return (lst);
}

t_stack	*ft_replace_nb(t_stack **stack_a, t_stock *stock)
{
	t_stack	*start;
	int		i;
	int		*tab;
	t_stack *tmp;

	tmp = (*stack_a);
	tab = ft_tab_replace(tmp, ft_nb_in_tab(tmp, stock), stock);
	i = 0;
	lstclear(&tmp);
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

void	lstadd_back(t_stack **alst, t_stack *new)
{
	t_stack	*lst;

	if (*alst == NULL)
	{
		*alst = new;
		return ;
	}
	lst = lstlast(*(alst));
	lst->next = new;
}

t_stack	*lstlast(t_stack *lst)
{
	if (lst)
		while (lst->next)
			lst = lst->next;
	return (lst);
}

t_stack	*newlst(int value)
{
	t_stack	*lst;

	lst = malloc(sizeof(t_stack));
	lst->content = value;
	lst->next = NULL;
	return (lst);
}

void	lstclear(t_stack **lst)
{
	t_stack	*next;

	if (lst)
	{
		while (*lst)
		{
			next = (*lst)->next;
			free(*lst);
			(*lst) = next;
		}
		*lst = NULL;
	}
}

int	ft_get_index(t_stack *l, int val)
{
	t_stack	*lst;
	int		i;

	i = 0;
	lst = l;
	while (lst)
	{
		if (lst->content == val)
			return (i);
		lst = lst->next;
		i++;
	}
	return (-1);
}

int	max(t_stack *l)
{
	t_stack	*lst;
	int		max;

	lst = l;
	max = lst->content;
	while (lst->next)
	{
		lst = lst->next;
		if (max < lst->content)
			max = lst->content;
	}
	return (max);
}