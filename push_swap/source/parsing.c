/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 18:37:52 by mshahein          #+#    #+#             */
/*   Updated: 2025/03/26 18:37:52 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_arg_nbr(char *str)
{
	if (!ft_isdigit(*str) && *str != '+' && *str != '-')
		return (1);
	if ((*str == '+' || *str == '-') && !ft_isdigit(*(str + 1)))
		return (1);
	str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (1);
		str++;
	}
	return (0);
}

int	duplicates(t_stack *a, int n)
{
	if (!a)
		return (0);
	while (a)
	{
		if (a->content == n)
			return (1);
		a = a->next;
	}
	return (0);
}
