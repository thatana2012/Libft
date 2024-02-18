/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerdnap <tjerdnap@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 10:26:18 by tjerdnap          #+#    #+#             */
/*   Updated: 2024/02/18 11:46:32 by tjerdnap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_numlen(int n)
{
	int	numlen;

	numlen = 0;
	if (n <= 0)
		numlen++;
	while (n != 0)
	{
		n /= 10;
		numlen++;
	}
	return (numlen);
}

char	*ft_itoa(int n)
{
	char			*a;
	unsigned int	numlen;
	unsigned int	number;

	numlen = ft_numlen(n);
	a = (char *)malloc(sizeof(char) * (numlen + 1));
	if (a == NULL)
		return (NULL);
	if (n < 0)
	{
		a[0] = '-';
		number = -n;
	}
	else
		number = n;
	if (number == 0)
		a[0] = '0';
	a[numlen] = '\0';
	while (number != 0)
	{
		a[numlen - 1] = (number % 10) + '0';
		number /= 10;
		numlen--;
	}
	return (a);
}
/*
#include <stdio.h>

int	main(void)
{
	int i = -0;
	char *a = ft_itoa(i);
	printf("%s\n", a);
}*/
