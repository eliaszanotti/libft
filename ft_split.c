/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:03:41 by ezanotti          #+#    #+#             */
/*   Updated: 2022/11/11 14:55:53 by ezanotti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_mallocsize(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c && *s)
		{
			while (*s != c && *s)
				s++;
			count++;
		}
		if (*s)
			s++;
	}
	return (count);
}

static char	**ft_splitstr(char const *s, char c, char **tab)
{
	int	i;
	int	j;
	int	i_tab;

	i = 0;
	j = 0;
	i_tab = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			i++;
			j++;
		}
		tab[i_tab] = malloc(sizeof(char) * (j + 1));
		if (!tab)
			return (0);
		ft_strlcpy(tab[i_tab], s + (i - j), j + 1);
		j = 0;
		i_tab++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	mallocsize;

	if (!s)
		return (0);
	mallocsize = ft_mallocsize(s, c);
	tab = malloc(sizeof(char *) * (mallocsize + 1));
	if (!tab)
		return (0);
	tab = ft_splitstr(s, c, tab);
	tab[mallocsize] = 0;
	return (tab);
}
