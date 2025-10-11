/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:08:46 by mshahein          #+#    #+#             */
/*   Updated: 2024/11/29 18:06:20 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;
	t_list	*p;

	i = 0;
	p = lst;
	while (p != NULL)
	{
		p = p->next;
		i++;
	}
	return (i);
}
/* #include <stdio.h>
int main()
{
	t_list *head = ft_lstnew("ciao");
	t_list *second = ft_lstnew("mondo");
	t_list *third = ft_lstnew("!");

	head->next = second;
	second->next = third;

	printf("La dimensione della lista è: %d\n", ft_lstsize(head));


	t_list *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	return 0;
} */
