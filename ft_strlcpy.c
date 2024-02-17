/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerdnap <tjerdnap@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 22:09:42 by tjerdnap          #+#    #+#             */
/*   Updated: 2024/02/17 15:01:01 by tjerdnap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src[20] = "Hel";
	char dest[20] = "Good bye";
	size_t size = 0;
    printf("%zu\n", ft_strlcpy(dest, src, size));
    return (0);
}