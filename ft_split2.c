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
#include <stdio.h>

static size_t	ft_mallocsize(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			while (*s != c && *s)
				s++;
			count++;
		}
		s++;	
	}
	return (count);
}

static char	**ft_splitstr(char const *s, char c, char **tab, size_t mallocsize)
{
	int	i;
	size_t	i_tab;

	i = 0;
	i_tab = 0;
	while (i_tab < mallocsize)
	{
		while (s[i] != c && s[i])
			i++;
		tab[i_tab] = ft_substr(s, 0, i);
		s += i;
		while (*s == c && *s)
			s++;
		i_tab++;
		i = 0;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	mallocsize;

	while (*s == c)
		s++;
	mallocsize = ft_mallocsize(s, c);
	printf("%zu\n", mallocsize);
	tab = malloc(sizeof(char *) * (mallocsize + 1));
	if (!tab)
		return (0);
	tab = ft_splitstr(s, c, tab, mallocsize);

	tab[mallocsize] = NULL;

	return (tab);
}

int main()
{
	int i = 0;
	char **tab = ft_split("-----test-----deeee------split", '-');

	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	//printf("%s\n", tab[i]);
}
