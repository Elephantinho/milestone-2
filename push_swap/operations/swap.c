/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 18:37:02 by mshahein          #+#    #+#             */
/*   Updated: 2025/03/26 18:37:02 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../source/push_swap.h"

static void	swap(t_stack **head)
{
	t_stack	*first;
	t_stack	*second;

	if (!*head || !(*head)->next)
		return ;
	first = *head;
	second = (*head)->next;
	first->next = second->next;
	first->prev = second;
	second->next = first;
	second->prev = NULL;
	if (first->next)
		first->next->prev = first;
	*head = second;
}

void	sa(t_stack **a, int flag)
{
	swap(a);
	if (flag == 0)
		ft_putendl_fd("sa", 1);
}

void	sb(t_stack **b, int flag)
{
	swap(b);
	if (flag == 0)
		ft_putendl_fd("sb", 1);
}

void	ss(t_stack **a, t_stack **b, int flag)
{
	swap(a);
	swap(b);
	if (flag == 0)
		ft_putendl_fd("ss", 1);
}
