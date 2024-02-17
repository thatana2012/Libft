/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerdnap <tjerdnap@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:12:50 by tjerdnap          #+#    #+#             */
/*   Updated: 2024/02/16 14:40:01 by tjerdnap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    if (*little == NULL || little[0] == '\0')
        return ((char *)big);
    while (big[i] != '\0' && i < n)
    { 
        if (big[i] == little[j])
        {
            while (big[i + j] == little[j] && i + j < n)
            {
                if (little[j + 1] == '\0')
                    return ((char *)big + i);
                j++;
            }
            j = 0;
        }
        i++;
    }
    return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

char *strnstr(const char *big, const char *little, size_t len);

int main()
{
    const char *big = "Hello It's me";
    const char *little = "It's";
    size_t len = 6;
    char *result = strnstr(big, little, len);

    if (result != NULL) {
        printf("%s\n", result);
    } else {
        printf("Substring not found\n");
    }

//    printf("%c\n", strnstr(big, little, len));
    return (0);
}
*/