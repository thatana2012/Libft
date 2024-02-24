/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerdnap <tjerdnap@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 20:55:21 by tjerdnap          #+#    #+#             */
/*   Updated: 2024/02/24 17:04:56 by tjerdnap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

static void	print_word(char *dst, char const *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

static void	free_array(char **arr, int i)
{
	while (i--)
		free(arr[i]);
	free(arr);
}

static int	str_alloc(char **arr, int index, int len)
{
	if (arr == NULL)
		return (0);
	arr[index] = (char *)malloc(sizeof(char) * (len + 1));
	if (arr[index] == NULL)
	{
		free_array(arr, index);
		return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		j;
	int		pos;

	strs = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	i = 0;
	pos = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			continue ;
		}
		j = 0;
		while (s[i + j] && s[i + j] != c)
			j++;
		if (!str_alloc(strs, pos, j))
			return (NULL);
		print_word(strs[pos++], s + i, j);
		i += j;
	}
	strs[pos] = NULL;
	return (strs);
}

#include <stdio.h>

int	main(int ac, char **av)
{
	int i = 0;
	char **strs;
	if (ac >= 3)
	{
		strs = ft_split(av[1], *av[2]);
		while (strs[i])
		{
			printf("%s\n", strs[i]);
			i++;
		}
		free_array(strs, i);
	}
	else
		printf("Usage: %s <string> <delimiter>\n", av[0]);
	return (0);
}