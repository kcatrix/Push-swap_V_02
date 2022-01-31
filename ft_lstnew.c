/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevyn <kevyn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:01:59 by tnicoue           #+#    #+#             */
/*   Updated: 2022/01/17 21:09:08 by kevyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstnew(int content)
{
	t_stack	*toto;

	toto = malloc(sizeof(t_stack));
	if (!toto)
		return (NULL);
	toto->content = content;
	toto->next = NULL;
	return (toto);
}
