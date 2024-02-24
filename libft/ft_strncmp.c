/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerdnap <tjerdnap@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 23:03:16 by tjerdnap          #+#    #+#             */
/*   Updated: 2024/02/20 14:55:54 by tjerdnap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	//	const char *s1 = "Hello ";
// 	//	const char *s2 = "HellO ";
// 	//	size_t n = 5;
// 	printf("%d\n", ft_strncmp("", "1", 1));
// 	printf("%d\n", strncmp("", "1", 1));
// 	//	printf("%d\n", strncmp(s1, s2, n));
// 	//	printf("%d\n", ft_strncmp(s1, s2, n));
// }
