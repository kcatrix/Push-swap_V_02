/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevyn <kevyn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:13:34 by tnicoue           #+#    #+#             */
/*   Updated: 2022/01/24 17:21:53 by kevyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (stack && (*stack)->next)
	{
		first = (*stack);
		last = (*stack);
		while (last->next != NULL)
			last = last->next;
		(*stack) = first->next;
		first->next = NULL;
		last->next = first;
	}
	write(1, "ra\n", 3);
}

void	ft_rb(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (stack && (*stack)->next)
	{
		first = (*stack);
		last = (*stack);
		while (last->next != NULL)
			last = last->next;
		(*stack) = first->next;
		first->next = NULL;
		last->next = first;
	}
	write(1, "rb\n", 3);
}

void	ft_rr(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*first;
	t_stack	*last;
	t_stack	*first2;
	t_stack	*last2;

	if (stack_a && (*stack_a)->next && stack_b && (*stack_b)->next)
	{
		first = (*stack_a);
		last = (*stack_a);
		while (last->next != NULL)
			last = last->next;
		(*stack_a) = first->next;
		first->next = NULL;
		last->next = first;
		first2 = (*stack_b);
		last2 = (*stack_b);
		while (last2->next != NULL)
			last2 = last2->next;
		(*stack_b) = first2->next;
		first2->next = NULL;
		last2->next = first2;
	}
	write(1, "rr\n", 3);
}
//Possiblement un seul des deux a executer
