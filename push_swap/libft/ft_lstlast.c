/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:29:07 by mshahein          #+#    #+#             */
/*   Updated: 2024/11/29 18:02:15 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/* #include <stdio.h>
int	main()
{
	t_list	*head = ft_lstnew("ciao");
	t_list	*second = ft_lstnew(" mondo");
	t_list	*third = ft_lstnew("cattivo");

	head->next = second;
	second->next = third;

	printf("%s", (char *)ft_lstlast(head)->content);

	t_list *temp;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
} */
