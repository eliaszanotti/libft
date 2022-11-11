/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:06:42 by ezanotti          #+#    #+#             */
/*   Updated: 2022/11/10 12:43:05 by ezanotti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	size_t	size;
	char	*new_s;

	size = nelem * elsize;
	if (size < nelem || size < elsize)
		return (NULL);
	new_s = malloc((size) * sizeof(void));
	if (!new_s)
		return (NULL);
	ft_bzero(new_s, size);
	return (new_s);
}
