/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevyn <kevyn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:41:17 by tnicoue           #+#    #+#             */
/*   Updated: 2022/01/13 18:52:04 by kevyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;

	i = -1;
	if (!s)
		return (0);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (ft_strlen(s) < start)
	{	
		a = (char *)malloc(sizeof(*s) * 1);
		if (!a)
			return (NULL);
		a[0] = '\0';
		return (a);
	}
	a = (char *)malloc(sizeof(*s) * (len + 1));
	if (!a)
		return (NULL);
	while (++i < len)
		a[i] = s[i + start];
	a[i] = '\0';
	return (a);
}
