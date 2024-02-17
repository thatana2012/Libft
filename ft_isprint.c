/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerdnap <tjerdnap@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 21:50:00 by tjerdnap          #+#    #+#             */
/*   Updated: 2024/02/17 12:26:46 by tjerdnap         ###   ########.fr       */
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
	printf("%d\n", isprint(' '));
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", isprint('\n'));
	printf("%d\n", ft_isprint('\n'));
}
*/