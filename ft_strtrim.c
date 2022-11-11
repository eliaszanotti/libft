/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:11:35 by ezanotti          #+#    #+#             */
/*   Updated: 2022/11/11 15:39:48 by ezanotti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isonset(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	int		count;
	int		i;
	char	*new_s;

	len = ft_strlen(s1);
	count = 0;
	i = 0;
	while (s1[i])
	{
		if (ft_isonset(s1[i], set))
			count++;
		i++;
	}
	new_s = malloc((len - count + 1) * sizeof(char));
	i = 0;
	while (*s1)
	{
		if (ft_isonset(*s1, set) == 0)
			new_s[i++] = *s1;
		s1++;
	}
	new_s[i] = '\0';
	return (new_s);
}
