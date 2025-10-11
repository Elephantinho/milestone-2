/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:38:46 by mshahein          #+#    #+#             */
/*   Updated: 2024/11/28 17:55:10 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
}
/* #include <stdio.h>
int	main()
{
	t_list *head = ft_lstnew("hello");
	t_list *seccond = ft_lstnew("ciao");

	ft_lstadd_back(&head, seccond);

	t_list *temp = seccond;

	while (temp != NULL)
	{
		printf("%s", (char *)temp->content);
		temp = temp->next;
	}
	t_list *temp2;
	while (head != NULL)
	{
		temp2 = head;
		head = head->next;
		free(temp2);
	}
} */
