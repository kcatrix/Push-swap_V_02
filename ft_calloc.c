/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:27:34 by acolin            #+#    #+#             */
/*   Updated: 2022/02/01 10:40:39 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * alloue la mémoire nécessaire pour un tableau de nmemb éléments de 
 * taille size octets, et renvoie un pointeur vers la mémoire allouée. 
 * Cette zone est remplie avec des zéros. Si nmemb ou size vaut 0, calloc() 
 * renvoie soit NULL, soit un pointeur unique qui pourra 
 * être passé ultérieurement à free() avec succès.
 *
 * \param	nmemb	nombres d'élèments
 * \param	size	taille d'un élèment
 * \return			renvoient un pointeur sur la mémoire allouée, 
 * 					qui est correctement alignée pour n'importe quel type de variable. 
 *				 	Si elles échouent, elles renvoient NULL. 
 *					NULL peut également être renvoyé par un appel réussi à malloc() 
 * 					avec un argument size égal à zéro,
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tab;

	tab = malloc(nmemb * size);
	if (!tab)
		return (NULL);
	ft_memset(tab, 0, nmemb * size);
	return ((void *)tab);
}
