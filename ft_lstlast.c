/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerdnap <tjerdnap@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:48:15 by tjerdnap          #+#    #+#             */
/*   Updated: 2024/02/20 12:33:02 by tjerdnap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>
t_list	*ft_lstnew(void *content)
{
    t_list  *new;

    new = (t_list *)malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!new || !*lst)
        return ;
    new->next = *lst;
    *lst = new;
}

int main(void)
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

    printf("Last Node: %s\n", (char *)ft_lstlast(list)->content);
    // Freeing the memory allocated for the linked list
    while (list)
    {
        t_list *temp = list;
        list = list->next;
        free(temp);
    }
    
    return 0;
}*/
