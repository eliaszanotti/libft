/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:55:13 by ezanotti          #+#    #+#             */
/*   Updated: 2022/11/08 13:24:43 by ezanotti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	last_occ;

	i = 0;
	last_occ = 0;
	if (c == '\0')
		return ("\0");
	while (s[i])
	{
		if (s[i] == c)
			last_occ = i;
		i++;
	}
	if (i == last_occ)
		return (0);
	while (last_occ-- > 0)
		s++;
	return ((char *)s);
}
