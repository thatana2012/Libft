/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerdnap <tjerdnap@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:01:49 by tjerdnap          #+#    #+#             */
/*   Updated: 2024/02/20 16:24:53 by tjerdnap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[100] = "Hello12345";

	char *first, *second, *temp;
	temp = src;
	first = src;
	second = src;
	printf("Ori: %s\n", src);
	memcpy(first + 5, temp, 10);
	printf("memcpy overlap: %s\n", src);
	ft_memcpy(second + 5, temp, 10);
	printf("ft_memcpy overlap: %s\n", src);
	return (0);
}
*/
