/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:34:13 by ezanotti          #+#    #+#             */
/*   Updated: 2022/11/09 18:14:05 by ezanotti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	const char		*str;
	unsigned char	new_c;

	i = 0;
	str = s;
	new_c = c;
	while (str[i] || i < n)
	{
		if (str[i] == new_c)
			return ((void *)(str + i));
		i++;
	}
	return (0);
}
