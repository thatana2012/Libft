/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerdnap <tjerdnap@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 22:33:30 by tjerdnap          #+#    #+#             */
/*   Updated: 2024/02/17 14:23:06 by tjerdnap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (unsigned char)c)
			return ((char *)s + len);
		len--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s[20] = "Hello Hi lo";
	char	c = ' ';

	printf("%s\n", strrchr(s, c));
	printf("%s\n", ft_strrchr(s, c));
	return (0);
}
*/