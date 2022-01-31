/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:39:45 by tnicoue           #+#    #+#             */
/*   Updated: 2022/01/31 12:39:48 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_stack **alst, t_stack *new)
{
	t_stack	*last;
	t_stack *tmp;
	
	tmp = *alst;
	if (alst)
	{
		if (*alst == NULL)
			*alst = new;
		else
		{
			while (tmp->next)
				tmp = tmp->next;
			last = tmp;
			last->next = new;
		}
	}
}

void	ft_init_struct(t_stock *stack)
{
	stack->bigger = INT_MIN;
	stack->shorter = INT_MAX;
	stack->shorter2 = INT_MAX;
	stack->pos_shorter = 0;
	stack->pos_shorter2 = 0;
	stack->size_b = 0;
	stack->lastb = 0;
	stack->size_all = 0;
	stack->var_tabcheck = 0;
	stack->pos_bigger = 0;
	stack->done = 0;
	stack->checkaccepta = 0;
	stack->checklast = 0;
}
