/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:34:13 by ezanotti          #+#    #+#             */
/*   Updated: 2022/11/08 15:49:23 by ezanotti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;

	str = s;
	if (c == '\0' || c == 0)
		return ("");
	while (n > 0 && *str)
	{
		if (c == *str)
			return ((void *)str);
		str++;
		n--;
	}
	return (0);
}
