/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerdnap <tjerdnap@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:38:39 by tjerdnap          #+#    #+#             */
/*   Updated: 2024/02/18 18:19:41 by tjerdnap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/*
#include <stdio.h>

int main(void)
{
    // Test with an integer content
    int data1 = 42;
    t_list *node1 = ft_lstnew(&data1);

    if (node1)
    {
        printf("Node 1: %d\n", *(int *)(node1->content));
        free(node1);
    }
    else
    {
        fprintf(stderr, "Error creating Node 1\n");
        return 1;
    }

    // Test with a string content
    char *data2 = "Hello, Linked List!";
    t_list *node2 = ft_lstnew(data2);

    if (node2)
    {
        printf("Node 2: %s\n", (char *)(node2->content));
        free(node2);
    }
    else
    {
        fprintf(stderr, "Error creating Node 2\n");
        return 1;
    }
    return 0;
}*/
