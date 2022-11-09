/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:07:19 by ezanotti          #+#    #+#             */
/*   Updated: 2022/11/09 21:25:54 by ezanotti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	save;
	size_t	len_needle;

	save = 0;
	i = 0;
	len_needle = ft_strlen(needle);
	if (len_needle == 0)
		return ((char *)haystack);
	while (haystack[i] && len > i)
	{
		i = save;
		while (haystack[i] == needle[j] && len > i)
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + save);
		}
		save++;
		j = 0;
	}
	return (0);
}
