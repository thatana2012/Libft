/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerdnap <tjerdnap@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:42:40 by tjerdnap          #+#    #+#             */
/*   Updated: 2024/02/20 09:41:50 by tjerdnap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_overflow(long s)
{
	if (s > 0)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	size_t	i;
	long	sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (nptr[i] - '0') + (result * 10);
		i++;
		if (result < 0)
			return (ft_overflow(sign));
	}
	return (result * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	char *c = "-9223372036854775809";
	int	i = ft_atoi(c);
	int	ori = atoi(c);
	printf("ft_: %d\n", i);
	printf("orr: %d\n", ori);
	return (0);
}
*/