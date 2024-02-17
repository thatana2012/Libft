/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerdnap <tjerdnap@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:42:13 by tjerdnap          #+#    #+#             */
/*   Updated: 2024/02/17 11:32:11 by tjerdnap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
	int isDigit;
    int isDigitOrg;

    isDigit = ft_isdigit(1);
    isDigitOrg = isdigit(1);
    printf("Is there any digit? %d\n", isDigit);
    printf("Is there any digit? %d\n", isDigitOrg);
    return (0);
}*/
