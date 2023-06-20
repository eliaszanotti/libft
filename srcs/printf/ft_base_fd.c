/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:20:32 by elias             #+#    #+#             */
/*   Updated: 2023/06/20 12:20:47 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_base_fd(char *base, long int nbr, int fd)
{
	if (nbr < 0)
		return (ft_base_fd(base, 4294967296 + nbr, fd));
	if (nbr < 16)
		return (ft_putchar_fd(base[nbr % 16], fd));
	return (ft_base_fd(base, nbr / 16, fd) + ft_putchar_fd(base[nbr % 16], fd));
}
