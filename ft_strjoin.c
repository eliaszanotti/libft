/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:46:04 by ezanotti          #+#    #+#             */
/*   Updated: 2022/11/09 21:47:28 by ezanotti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*new_s;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new_s = malloc((len1 + len2 + 1) * sizeof(char));
	if (!new_s)
		return (0);
	new_s[0] = '\0';
	ft_strlcat(new_s, s1, len1 + 1);
	ft_strlcat(new_s, s2, len2 + len1 + 1);
	return (new_s);
}
