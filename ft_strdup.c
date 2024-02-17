/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerdnap <tjerdnap@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 00:47:14 by tjerdnap          #+#    #+#             */
/*   Updated: 2024/02/17 11:04:41 by tjerdnap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
    int i;
    char    *temp;

    i = 0;
    temp = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (temp == NULL)
        return (NULL);
    while (*s)
    {
        temp[i] = s[i];
        i++;
    }
    temp[i] = '\0';
    return (temp);
}

#include <string.h>
#include <stdio.h>

int main()
{
    char *src = "Hello 123";
    //int srclen = ft_strlen(src);
    //char *dest = (char *)malloc(sizeof(char) * (srclen + 1));
    printf("%s\n", ft_strdup(src));
    return (0);size_t	strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
}