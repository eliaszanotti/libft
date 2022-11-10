/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:03:41 by ezanotti          #+#    #+#             */
/*   Updated: 2022/11/10 11:38:02 by ezanotti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t	ft_mallocsize(char const *s, char c)
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

char	*ft_charcat(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	s[i] = c;
	s[i + 1] = '\0';
	return (s);
}

char **ft_split(char const *s, char c)
{
	char	**tab;
	int		i_tab;
	int		i;
	int		j;

	tab = malloc((ft_mallocsize(s, c) + 1) * (sizeof(char *)));
	if (!tab)
		return (0);
	i_tab = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[j] != c && s[j])
			j++;
		tab[i_tab] = malloc(sizeof(char) * (j + 1));
		if (!tab[i_tab])
			return (0);
		tab[i_tab][0] = '\0';
		strlcpy(tab[i_tab], s + i, j - i + 1);
		i = j;
		i_tab++;	
	}
	tab[ft_mallocsize(s, c)] = 0;
	return (tab);
}

int main()
{
	int i = 0;

	char **tab = ft_split("", ' ');
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	printf("%s\n", tab[i]);
}
