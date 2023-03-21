/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:15:46 by ezanotti          #+#    #+#             */
/*   Updated: 2023/03/21 12:48:31 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_printf_calls(va_list args, char type, int fd)
{
	int	total;

	total = 0;
	if (type == 'c')
		total += ft_putchar_fd(va_arg(args, int), fd);
	else if (type == 's')
		total += ft_putstr_fd(va_arg(args, char *), fd);
	else if (type == 'p')
		total += ft_printaddress_fd(va_arg(args, void *), fd);
	else if (type == 'd')
		total += ft_putnbr_fd(va_arg(args, int), fd);
	else if (type == 'i')
		total += ft_putnbr_fd(va_arg(args, int), fd);
	else if (type == 'u')
		total += ft_putnbr_unsigned_fd(va_arg(args, int), fd);
	else if (type == 'x')
		total += ft_base_fd("0123456789abcdef", va_arg(args, int), fd);
	else if (type == 'X')
		total += ft_base_fd("0123456789ABCDEF", va_arg(args, int), fd);
	else if (type == '%')
		total += ft_putchar_fd('%', fd);
	else
		total += ft_putchar_fd(type, fd);
	return (total);
}

int	ft_printf_fd(const char *s, int fd, ...)
{
	va_list	args;
	int		i;
	int		total;

	va_start(args, fd);
	i = 0;
	total = 0;
	if (write(1, 0, 0) == -1)
	{
		return (-1);
		va_end(args);
	}
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1])
			total += ft_printf_calls(args, s[++i], fd);
		else
			total += ft_putchar_fd(s[i], fd);
		i++;
	}
	va_end(args);
	return (total);
}
