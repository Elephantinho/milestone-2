/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 18:35:51 by mshahein          #+#    #+#             */
/*   Updated: 2025/03/26 18:35:51 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../source/push_swap.h"

static void	push(t_stack **dst, t_stack **src)
{
	t_stack	*node;

	node = *src;
	if (!*src)
		return ;
	*src = node->next;
	if (*src)
		(*src)->prev = NULL;
	node->next = *dst;
	node->prev = NULL;
	if (*dst)
		(*dst)->prev = node;
	*dst = node;
}

void	pa(t_stack **a, t_stack **b, int flag)
{
	push(a, b);
	if (flag == 0)
		ft_putendl_fd("pa", 1);
}

void	pb(t_stack **b, t_stack **a, int flag)
{
	push(b, a);
	if (flag == 0)
		ft_putendl_fd("pb", 1);
}
