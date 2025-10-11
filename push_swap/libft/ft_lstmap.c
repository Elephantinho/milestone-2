/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:53:17 by mshahein          #+#    #+#             */
/*   Updated: 2024/11/29 17:58:51 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*new_list;
	t_list	*new_node;

	ptr = lst;
	new_list = NULL;
	if (lst == NULL)
		return (NULL);
	while (ptr)
	{
		new_node = ft_lstnew(f(ptr->content));
		if (new_node == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		ptr = ptr->next;
	}
	return (new_list);
}
/* void	*ft_cont(void *content)
{
	char	*str = (char *)content;
	char	*new_str;

	new_str = ft_strdup(str + 1);
	return (new_str);
} */
/* void	ft_del(void	*content)
{
	free(content);
} */
/* #include <stdio.h>
int	main()
{
	t_list	*new_list = NULL;
	t_list	*head = ft_lstnew(ft_strdup("ciao"));
	t_list	*second = ft_lstnew(ft_strdup(" mondo"));
	t_list	*third = ft_lstnew(ft_strdup(" cattivo"));

	head->next = second;
	second->next = third;

	t_list *temp = head;
	while (temp != NULL)
	{
		printf("%s", (char *)temp->content);
		temp = temp->next;
	}
	printf("\n");

	new_list = ft_lstmap(head, ft_cont, ft_del);

	while (new_list != NULL)
	{
		printf("%s", (char *)new_list->content);
		new_list = new_list->next;
	}
	ft_lstclear(&head, ft_del);
	ft_lstclear(&new_list, ft_del);
} */
