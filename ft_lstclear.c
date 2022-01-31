/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicoue <tnicoue@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:00:38 by tnicoue           #+#    #+#             */
/*   Updated: 2022/01/04 14:56:28 by tnicoue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear(t_stack **lst)
{
	t_stack	*lst2;
	t_stack	*lst3;

	lst2 = *lst;
	lst3 = *lst;
	while (lst2)
	{
		lst3 = lst3->next;
		free(lst2);
		lst2 = lst3;
	}
	*lst = NULL;
}
