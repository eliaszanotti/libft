/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:13:40 by tgiraudo          #+#    #+#             */
/*   Updated: 2023/06/20 12:49:13 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isnl(const char *s)
{
	size_t			i;
	size_t			len;

	i = 0;
	if (!s)
		return (0);
	len = ft_strlen_gnl(s);
	while (i <= len)
	{
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
