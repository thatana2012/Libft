/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerdnap <tjerdnap@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:27:33 by tjerdnap          #+#    #+#             */
/*   Updated: 2024/02/21 12:50:31 by tjerdnap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[len - 1] && ft_strchr(set, s1[len - 1]) && len > i)
		len--;
	new = (char *)malloc(sizeof(char) * (len - i + 1));
	if (new == NULL)
		return (NULL);
	ft_strlcpy(new, &s1[i], len - i + 1);
	return (new);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[20] = "abcdefabjb";
	char	set[20] = "bcf";
	printf("%s\n", ft_strtrim(str, set));
	return (0);
}*/