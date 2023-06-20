/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printaddress_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:20:58 by elias             #+#    #+#             */
/*   Updated: 2023/06/20 12:21:13 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printaddress_fd(void *address, int fd)
{
	unsigned long	address_long;
	int				i;
	char			str[17];
	char			*base;
	int				total;

	if (!address)
		return (ft_putstr_fd("0x0", fd));
	address_long = (long int)address;
	i = 0;
	base = "0123456789abcdef";
	total = 0;
	while (address_long)
	{
		str[i++] = base[address_long % 16];
		address_long /= 16;
	}
	total += ft_putstr_fd("0x", fd);
	while (--i >= 0)
		total += ft_putchar_fd(str[i], fd);
	return (total);
}
