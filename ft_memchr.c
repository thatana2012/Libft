/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerdnap <tjerdnap@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 08:33:58 by tjerdnap          #+#    #+#             */
/*   Updated: 2024/02/16 11:10:46 by tjerdnap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*temp;

	temp = (char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)temp[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s[30] = "Hello Hi lo";
	char c1 = 'l';
	char c2 = 'l';
	size_t n = 10;
	printf("%s\n", (char *)memchr(s + 4, c1, n));
	printf("%s\n", (char *)ft_memchr(s + 4, c2, n));
	return (0);
}
*/
