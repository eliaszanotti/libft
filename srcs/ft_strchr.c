/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:41:24 by ezanotti          #+#    #+#             */
/*   Updated: 2022/11/08 12:52:45 by ezanotti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char*)s);
		s++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int main () {
   const char str[] = "cbhfefeftefgefe";
   const char ch = 'u';
   char *p;
   char *pp;
   p = ft_strchr(str, ch);
   pp = strchr(str, ch);
   printf("String starting from %c is: %s\n", ch, p);
   printf("String starting from %c is: %s\n", ch, pp);
   return 0;
}*/
