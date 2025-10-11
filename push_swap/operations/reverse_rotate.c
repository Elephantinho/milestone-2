/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 18:36:39 by mshahein          #+#    #+#             */
/*   Updated: 2025/03/26 18:36:39 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../source/push_swap.h"

static void	reverse_rotate(t_stack **stack)
{
	t_stack	*last;

	if (!*stack || !(*stack)->next)
		return ;
	last = find_last(*stack);
	last->prev->next = NULL;
	last->next = *stack;
	last->prev = NULL;
	*stack = last;
	last->next->prev = last;
}

void	rra(t_stack **a, int flag)
{
	reverse_rotate(a);
	if (flag == 0)
		ft_putendl_fd("rra", 1);
}

void	rrb(t_stack **b, int flag)
{
	reverse_rotate(b);
	if (flag == 0)
		ft_putendl_fd("rrb", 1);
}

void	rrr(t_stack **a, t_stack **b, int flag)
{
	reverse_rotate(a);
	reverse_rotate(b);
	if (flag == 0)
		ft_putendl_fd("rrr", 1);
}
