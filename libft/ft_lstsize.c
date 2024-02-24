/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerdnap <tjerdnap@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:35:41 by tjerdnap          #+#    #+#             */
/*   Updated: 2024/02/20 08:20:22 by tjerdnap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*temp;

	len = 0;
	temp = lst;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}
/*
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !*lst)
		return ;
	new->next = *lst;
	*lst = new;
}

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

int	main(void)
{
	// Creating a sample linked list with nodes 2, 3, 4
	t_list *list = ft_lstnew("Node 1");
	ft_lstadd_front(&list, ft_lstnew("Node 2"));
	ft_lstadd_front(&list, ft_lstnew("Node 3"));
	ft_lstadd_front(&list, ft_lstnew("Node 4"));

	// Printing the contents of the linked list
	t_list *current = list;

	while (current)
	{
		printf("%s\n", (char *)(current->content));
		current = current->next;
	}

	printf("%d\n", ft_lstsize(list));

	// Freeing the memory allocated for the linked list
	while (list)
	{
		t_list *temp = list;
		list = list->next;
		free(temp);
	}

	return (0);
}*/
