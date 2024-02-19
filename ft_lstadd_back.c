/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerdnap <tjerdnap@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 08:55:32 by tjerdnap          #+#    #+#             */
/*   Updated: 2024/02/19 14:05:34 by tjerdnap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!new || !*lst)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
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

int main(void)
{
    // Creating a sample linked list with nodes 2, 3, 4
    t_list *list = ft_lstnew("Node 1");
    ft_lstadd_back(&list, ft_lstnew("Node 2"));
    ft_lstadd_back(&list, ft_lstnew("Node 3"));
    ft_lstadd_back(&list, ft_lstnew("Node 4"));
    
    // Printing the contents of the linked list
    t_list *current = list;
    
    while (current)
    {
        printf("%s\n", (char *)(current->content));
        current = current->next;
    }
    // Freeing the memory allocated for the linked list
    while (list)
    {
        t_list *temp = list;
        list = list->next;
        free(temp);
    }
    
    return 0;
}
*/
