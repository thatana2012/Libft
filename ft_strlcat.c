/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerdnap <tjerdnap@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 22:54:51 by tjerdnap          #+#    #+#             */
/*   Updated: 2024/02/19 16:34:37 by tjerdnap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		src_len;
	size_t		dest_len;
	size_t		total_len;
	const char	*s;

	if ((!dest || !src) && !size)
		return (0);
	s = src;
	src_len = ft_strlen(s);
	dest_len = 0;
	while (*(dest + dest_len) && dest_len < size)
		dest_len++;
	if (dest_len >= size)
		return (size + src_len);
	else
		total_len = dest_len + src_len;
	while (*s && (dest_len + 1) < size)
	{
		*(dest + dest_len) = *s++;
		dest_len++;
	}
	*(dest + dest_len) = '\0';
	return (total_len);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char src[20] = "Hello lo";
    char dst[20] = "Hi There";
    size_t size =  0;
    
    printf("%d\n", (int)ft_strlcat(dst, src, size));
}*/
