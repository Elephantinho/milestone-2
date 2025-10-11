/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 18:36:48 by mshahein          #+#    #+#             */
/*   Updated: 2025/03/26 18:36:48 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../source/push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = find_last(*stack);
	*stack = first->next;
	(*stack)->prev = NULL;
	last->next = first;
	first->prev = last;
	first->next = NULL;
}

void	ra(t_stack **a, int flag)
{
	rotate(a);
	if (flag == 0)
		ft_putendl_fd("ra", 1);
}

void	rb(t_stack **b, int flag)
{
	rotate(b);
	if (flag == 0)
		ft_putendl_fd("rb", 1);
}

void	rr(t_stack **a, t_stack **b, int flag)
{
	rotate(a);
	rotate(b);
	if (flag == 0)
		ft_putendl_fd("rr", 1);
}
