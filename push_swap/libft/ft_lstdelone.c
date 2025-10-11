/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:50:56 by mshahein          #+#    #+#             */
/*   Updated: 2024/11/28 17:45:35 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}
/* void	ft_delete(void *content)
{
	free(content);
} */
/* #include <stdio.h>
int	main()
{
	t_list *head = ft_lstnew(ft_strdup("ciao"));
	t_list *second = ft_lstnew(ft_strdup("hello"));

	head->next = second;

	t_list *temp = head;
	while (temp != NULL)
	{
		printf("%s", (char *)temp->content);
		temp = temp->next;
	}
	printf("\n");

	t_list *next_node = head->next;

	ft_lstdelone(head, ft_delete);

	head = next_node;

	printf("%s\n", (char*)head->content);

	ft_lstdelone(head, ft_delete);

} */
