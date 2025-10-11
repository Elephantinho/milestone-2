/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:48:59 by mshahein          #+#    #+#             */
/*   Updated: 2024/11/28 18:05:53 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*  #include <stdio.h>
int	main()
{
	t_list *head = ft_lstnew("ciao ");
	t_list *second = ft_lstnew("addio");
	t_list *new_node =ft_lstnew("hello ");

	head->next = second;

	t_list *tmp = head;
	while (tmp != NULL)
	{
		printf("%s", (char *)tmp->content);
		tmp = tmp -> next;
	}
	printf("\n");

	ft_lstadd_front(&head, new_node);

	t_list *temp = head;
	while (temp != NULL)
	{
		printf("%s", (char *)temp->content);
		temp = temp -> next;
	}

	t_list *temp2;
	while (head != NULL)
	{
		temp2 = head;
		head = head->next;
		free(temp2);
	}
} */
