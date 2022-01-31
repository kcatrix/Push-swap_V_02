/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevyn <kevyn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:13:28 by tnicoue           #+#    #+#             */
/*   Updated: 2022/01/13 19:08:34 by kevyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stack **stack)
{
	t_stack	*first;

	first = (*stack);
	if (first && first->next)
		while (first->next->next != NULL)
			first = first->next;
	first->next->next = (*stack);
	(*stack) = first->next;
	first->next = NULL;
	write(1, "rra\n", 4);
}

void	ft_rrb(t_stack **stack)
{
	t_stack	*first;

	first = (*stack);
	if (first && first->next)
		while (first->next->next != NULL)
			first = first->next;
	first->next->next = (*stack);
	(*stack) = first->next;
	first->next = NULL;
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*firsta;
	t_stack	*firstb;

	firsta = (*stack_a);
	firstb = (*stack_b);
	if (firsta && firsta->next)
		while (firsta->next->next != NULL)
			firsta = firsta->next;
	firsta->next->next = (*stack_a);
	(*stack_a) = firsta->next;
	firsta->next = NULL;
	firsta = (*stack_a);
	if (firstb && firstb->next)
		while (firstb->next->next != NULL)
			firstb = firstb->next;
	firstb->next->next = (*stack_b);
	(*stack_b) = firstb->next;
	firstb->next = NULL;
	write(1, "rrr\n", 4);
}
