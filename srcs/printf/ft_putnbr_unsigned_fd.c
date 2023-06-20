/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:21:24 by elias             #+#    #+#             */
/*   Updated: 2023/06/20 12:28:00 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_unsigned_fd(unsigned int n, int fd)
{
	if (n <= 9)
		return (ft_putchar_fd(n + '0', fd));
	return (ft_putnbr_fd(n / 10, fd) + ft_putchar_fd((n % 10) + '0', fd));
}
