/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:48:28 by ezanotti          #+#    #+#             */
/*   Updated: 2022/11/08 15:17:35 by ezanotti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*copy_src;
	char		*copy_dest;
	char		buffer[4096];

	i = 0;
	copy_src = src;
	copy_dest = dest;
	while (i < n)
	{
		buffer[i] = copy_src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		copy_dest[i] = buffer[i];
		i++;
	}	
	return (dest);
}
