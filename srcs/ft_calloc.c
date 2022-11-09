/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:06:42 by ezanotti          #+#    #+#             */
/*   Updated: 2022/11/09 22:18:00 by ezanotti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	size_t	size;
	char	*new_s;

	size = nelem * elsize;
	if (size < nelem || size < elsize)
		return (0);
	new_s = malloc((size) * sizeof(void));
	ft_bzero(new_s, size);
	return (new_s);
}
