/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:14:31 by mshahein          #+#    #+#             */
/*   Updated: 2024/11/29 17:43:21 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		(f)(lst->content);
		lst = lst->next;
	}
}
/* void	ft_del(void *content)
{
	free(content);
} */
/* #include <stdio.h>
int	main()
{
	t_list *head = ft_lstnew(ft_strdup("ciao "));
	t_list *second = ft_lstnew(ft_strdup("mondo"));
	t_list *third = ft_lstnew(ft_strdup(" cattvo"));

	head->next = second;
	second->next = third;

	t_list *temp = head;

	while (temp != NULL)
	{
		printf("%s", (char *)temp->content);
		temp = temp->next;
	}
	printf("\n");
	ft_lstiter(head, ft_del);
	free(head);
	t_list *temp1 = head;

	while (temp1 != NULL)
	{
		printf("%s",(char *)temp1->next);
		temp1 = temp1->next;
	}
} */
