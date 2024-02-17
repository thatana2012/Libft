/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerdnap <tjerdnap@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:09:36 by tjerdnap          #+#    #+#             */
/*   Updated: 2024/02/17 14:38:20 by tjerdnap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*temp;

	temp = (char *)s;
	while (n > 0)
	{
		temp[n - 1] = c;
		n--;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[100] = "Hello123Hi";

	char *ft, *ori;
	ori = str;
	//ft = str;
	printf("Ori String: %s\n", str);
	memset(ori + 2, '.', 2 * sizeof(char));
	//ft_memset(ft + 2, '.', 2 * sizeof(char));
	printf("Ori memset: %s\n", ori);
	//printf("ft memset:  %s\n", ft);
	return (0);
}
*/