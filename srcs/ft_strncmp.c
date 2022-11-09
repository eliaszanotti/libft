/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:37:27 by ezanotti          #+#    #+#             */
/*   Updated: 2022/11/09 22:09:05 by ezanotti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const char	*copy_s1;
	const char	*copy_s2;
	size_t		i;

	copy_s1 = s1;
	copy_s2 = s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && *copy_s1 == *copy_s2)
	{
		copy_s1++;
		copy_s2++;
		i++;
	}
	return (*copy_s1 - *copy_s2);
}
