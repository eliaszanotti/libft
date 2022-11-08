/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:51:51 by ezanotti          #+#    #+#             */
/*   Updated: 2022/11/08 16:02:11 by ezanotti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const int	*copy_s1;
	const int	*copy_s2;

	copy_s1 = s1;
	copy_s2 = s2;
	while (n > 0 && *copy_s1 && *copy_s2)
	{
		if (*copy_s1 != *copy_s2)
			return (*copy_s1 - *copy_s2);
		copy_s1++;
		copy_s2++;
		n--;
	}
	return (0);
}
