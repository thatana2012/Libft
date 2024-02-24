/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerdnap <tjerdnap@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 22:02:11 by tjerdnap          #+#    #+#             */
/*   Updated: 2024/02/19 14:49:57 by tjerdnap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	else
		return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
    char s[40] = "Hello Hi lo";
    char c1 = 'c';
    char c2 = 'c';
    printf("%s\n", strchr(s, c1));
    printf("%s\n", ft_strchr(s, c2));
    return (0);
}
*/
