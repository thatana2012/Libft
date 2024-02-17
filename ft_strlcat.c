/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerdnap <tjerdnap@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 22:54:51 by tjerdnap          #+#    #+#             */
/*   Updated: 2024/02/17 00:57:43 by tjerdnap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

size_t  ft_strlen(const char *str)
{
    size_t count;

    count = 0;
    while (str[count] != '\0')
        count++;
    return (count);
}

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  dstlen;
    size_t  srclen;
    size_t  i;

    if (size == 0 && dst == NULL)
        return (0);
    dstlen = ft_strlen(dst);
    srclen = ft_strlen(src);
    i = 0;
    if (size - 1 < dstlen)
        return (size + srclen);
    while (src[i] != '\0' && dstlen < size - 1)
    {
        dst[dstlen] = src[i];
        i++;
        dstlen++;
    }
    dst[dstlen] = '\0';
    return (dstlen + srclen);
}

#include <stdio.h>
#include <string.h>
int main()
{
    char src[20] = "Hello lo";
    char dst[20] = "Hi There";
    size_t size =  0;
    
    printf("%zu\n", ft_strlcat(dst, src, size));
    //printf("%zu\n", strlcat(dst, src, size)); 
}