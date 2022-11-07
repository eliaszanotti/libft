/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:17:18 by ezanotti          #+#    #+#             */
/*   Updated: 2022/11/07 18:58:01 by ezanotti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	negatif;
	int	total;

	negatif = 0;
	total = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negatif++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		total = (total * 10) + *str - '0';
		str++;
	}
	if (negatif % 2)
		return (-total);
	return (total);
}
