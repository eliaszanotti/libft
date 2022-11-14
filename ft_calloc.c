/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:06:42 by ezanotti          #+#    #+#             */
/*   Updated: 2022/11/14 11:05:24 by ezanotti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	char	*new_s;

	total = count * size;
	if (!count || !size)
		return (malloc(0));
	if (SIZE_MAX / size < count)
		return (0);
	new_s = malloc(total);
	if (!new_s)
		return (0);
	while (total > 0)
		new_s[total--] = '\0';

	//ft_bzero(new_s, total);
	return (new_s);
}
