/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:11:25 by acolin            #+#    #+#             */
/*   Updated: 2022/02/01 10:39:48 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * remplit les n premiers octets de la zone mémoire pointée par s avec 
 * l'octet c.
 *
 * \param	*s	pointeur sur la zone mémoire
 * \param	c	octet de remplissage
 * \param	n	nombres d'octets
 * \return		renvoie un pointeur sur la zone mémoire s.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;

	a = (unsigned char *) s;
	while (n)
	{
		*a = (unsigned char) c;
		a++;
		n--;
	}
	return (s);
}
