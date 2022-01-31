/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevyn <kevyn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:44:31 by tnicoue           #+#    #+#             */
/*   Updated: 2022/01/24 18:24:46 by kevyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// sa && sb

void	ft_sa(t_stack **stack)
{
	t_stack	*tmp;

	if (stack && (*stack)->next)
	{
		tmp = (*stack)->next;
		(*stack)->next = (*stack)->next->next;
		tmp->next = *stack;
		*stack = tmp;
	}
	write(1, "sa\n", 3);
}

void	ft_sb(t_stack **stack)
{
	t_stack	*tmp;

	if (stack && (*stack)->next)
	{
		tmp = (*stack)->next;
		(*stack)->next = (*stack)->next->next;
		tmp->next = *stack;
		*stack = tmp;
	}
	write(1, "sb\n", 3);
}

void	ft_ss(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (stack_a && (*stack_a)->next)
	{
		tmp = (*stack_a)->next;
		(*stack_a)->next = (*stack_a)->next->next;
		tmp->next = *stack_a;
		*stack_a = tmp;
	}
	if (stack_b && (*stack_b)->next)
	{
		tmp2 = (*stack_b)->next;
		(*stack_b)->next = (*stack_b)->next->next;
		tmp2->next = *stack_b;
		*stack_b = tmp2;
	}
	write(1, "ss\n", 3);
}

void	ft_pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*ptr_a;
	t_stack	*ptr_b;

	ptr_a = *stack_b;
	ptr_b = *stack_b;
	ptr_a = ptr_a->next;
	*stack_b = ptr_a;
	ptr_b->next = NULL;
	if (*stack_a)
		ft_lstadd_front(stack_a, ptr_b);
	*stack_a = ptr_b;
	write(1, "pa\n", 3);
}

void	ft_pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*ptr_a;
	t_stack	*ptr_b;

	ptr_a = *stack_a;
	ptr_b = *stack_a;
	ptr_a = ptr_a->next;
	*stack_a = ptr_a;
	ptr_b->next = NULL;
	if (*stack_b)
		ft_lstadd_front(stack_b, ptr_b);
	*stack_b = ptr_b;
	write(1, "pb\n", 3);
}