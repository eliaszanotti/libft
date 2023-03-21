/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:54:40 by ezanotti          #+#    #+#             */
/*   Updated: 2023/03/21 12:46:28 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char *s, int fd)
{
	int	total;

	total = 0;
	if (!s)
		return (ft_putstr_fd("(null)", fd));
	while (*s)
		total += ft_putchar_fd(*s++, fd);
	return (total);
}
