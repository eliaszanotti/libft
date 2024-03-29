/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:48:28 by ezanotti          #+#    #+#             */
/*   Updated: 2023/08/29 14:32:01 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*copy_src;
	char		*copy_dest;

	if (!dest && !src)
		return (0);
	copy_src = src;
	copy_dest = dest;
	if (copy_src > copy_dest && copy_src < copy_dest + n)
		ft_memcpy(copy_dest, copy_src, n);
	else
	{
		while (n--)
			copy_dest[n] = copy_src[n];
	}
	return (dest);
}
