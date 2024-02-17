/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerdnap <tjerdnap@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 21:50:00 by tjerdnap          #+#    #+#             */
/*   Updated: 2024/02/15 21:50:08 by tjerdnap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main()
{
	printf("%d\n", isprint(33));
	printf("%d\n", ft_isprint(33));
	printf("%d\n", isprint(31));
	printf("%d\n", ft_isprint(31));
}
*/