/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:34:31 by ezanotti          #+#    #+#             */
/*   Updated: 2022/11/09 21:55:15 by ezanotti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*new_s;

	if (!*s)
		return (0);
	len = ft_strlen(s);
	new_s = malloc(sizeof(char) * (len + 1));
	if (!new_s)
		return (0);
	new_s = ft_strdup(s);
	i = 0;
	while (new_s[i])
	{
		new_s[i] = f(i, new_s[i]);
		i++;
	}	
	return (new_s);
}

/*
char ft(unsigned int i, char c)
{
	return (c - 1);
	i++;
}

#include <stdio.h>
int main()
{
	char *s = "";

	printf("%s\n", ft_strmapi(s, ft));
}*/
