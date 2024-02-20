/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerdnap <tjerdnap@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 22:31:01 by tjerdnap          #+#    #+#             */
/*   Updated: 2024/02/20 11:27:14 by tjerdnap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;

	new_list = NULL;
	while (lst)
	{
		new_elem = ft_lstnew(f(lst->content));
		if (!new_elem)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}
/*
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!del || !(*lst) || !lst)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	free(*lst);
	*lst = NULL;
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	(del)(lst->content);
	free(lst);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}


size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	return (srclen);
}


// A sample function to be applied to each element in the list
void *f(void *first_character) {
	int	len;
	char	*a;

	len = ft_strlen((char *)first_character);
	a = malloc(sizeof(char) * len + 1);
	ft_strlcpy(a, (char *)first_character, len + 1);
	a[0] = 'w';
	return (a);
}

// A function to free the content of a list node
void del(void *content) {
    free(content);
}

int main(void) {
	t_list	*lst;
	t_list	*lst0;
	t_list	*lst1;
	char	*a1;
	int	size_of_list = 2;

	a1 = malloc(sizeof(char) * 6);
	ft_strlcpy(a1, "word1", 6);
	lst = ft_lstnew(a1);

	lst0 = lst;
	
	while (size_of_list <= 4)
	{
		a1 = malloc(sizeof(char) * 6);
		ft_strlcpy(a1, "word1", 6);
		a1[4] = (size_of_list % 10) + '0';
		lst->next = ft_lstnew(a1);
		lst = lst->next;
		size_of_list++;
	}
	// lst1 = ft_lstmap(lst0, f, del);
	while (lst0)
	{
		printf("%s\n", (char *)lst0->content);
		lst0 = lst0->next;
	}
    return 0;
}*/
