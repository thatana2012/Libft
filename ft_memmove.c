/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerdnap <tjerdnap@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:40:35 by tjerdnap          #+#    #+#             */
/*   Updated: 2024/02/17 15:19:35 by tjerdnap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	len;
	unsigned char	*temp_dest;
	unsigned char	*temp_src;

	temp_dest = (unsigned char *)dest;
	temp_src = (unsigned char *)src;
	if (temp_dest < temp_src)
	{
		len = n;
		while (len-- > 0)
			temp_dest[len] = temp_src[len];
	}
	else
	{
		len = 0;
		while (len < n)
		{
			temp_dest[len] = temp_src[len];
			len++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src[100] = "Hello12345";
	char *first, *second;
	first = src;
	second = src;
	printf("Ori: %s\n", src);
	memcpy(first + 2, first, 5);
	printf("memcpy overlap: %s\n", src);
	ft_memmove(second + 2, first, 5);
	printf("memmove overlap: %s\n", src);
	return (0);
}*/
