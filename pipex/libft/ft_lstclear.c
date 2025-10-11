/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:52:15 by mshahein          #+#    #+#             */
/*   Updated: 2024/11/29 18:05:04 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	while (*lst != NULL)
	{
		ptr = *lst;
		*lst = ptr->next;
		del(ptr->content);
		free(ptr);
	}
}
/* void	ft_del(void *content)
{
	free(content);
} */
/* #include <stdio.h>
int	main()
{
	t_list *head = ft_lstnew(ft_strdup("ciao"));
	t_list *second = ft_lstnew(ft_strdup(" mondo "));
	t_list *third = ft_lstnew(ft_strdup("cattivo"));

	head->next = second;
	second->next = third;

	t_list *temp = head;

	while (temp != NULL)
	{
		printf("%s", (char *)temp->content);
		temp = temp->next;
	}
	printf("\n");
	ft_lstclear(&head, ft_del);

	t_list *temp1 = head;
	while (temp1 != NULL)
	{
		printf("%s", (char *)temp1->content);
		temp1 = temp1->next;
	}
	return (0);
} */
