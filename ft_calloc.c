/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerdnap <tjerdnap@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 00:37:28 by tjerdnap          #+#    #+#             */
/*   Updated: 2024/02/17 00:45:39 by tjerdnap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;
    size_t  byte;

    byte = nmemb * size;
    ptr = malloc(byte);
    if (ptr == NULL)
        return (NULL);
    ft_bzero(ptr, byte);
    return (ptr);
}