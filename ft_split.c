/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevyn <kevyn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:40:49 by tnicoue           #+#    #+#             */
/*   Updated: 2022/01/17 20:53:40 by kevyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	compte(const char *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			j++;
		else if (s[i] != c && (i > 0 && s[i - 1] == c))
			j++;
		i++;
	}
	return (j);
}

static int	futur(const char *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**a;
	int		i;
	int		j;
	int		k;

	if (!s)
		return (0);
	j = compte((char *)s, c);
	a = malloc(sizeof(char *) * (j + 1));
	if (!a)
		return (0);
	i = 0;
	while (i < j)
	{
		k = 0;
		while (*s != '\0' && *s == c)
			s++;
		k = futur((char *)s, c);
		a[i] = ft_substr(s, 0, k);
		while (*s != '\0' && *s != c)
			s++;
		i++;
	}
	a[i] = NULL;
	return (a);
}
