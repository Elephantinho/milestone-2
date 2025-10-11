/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_void.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:47:32 by mshahein          #+#    #+#             */
/*   Updated: 2024/12/10 11:57:01 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p_hex(uintptr_t s)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (s >= 16)
		count += ft_print_p_hex(s / 16);
	count += write(1, &base[s % 16], 1);
	return (count);
}

int	ft_print_void(uintptr_t s)
{
	int	count;

	count = 0;
	if (s == 0)
		return (write(1, "(nil)", 5));
	count += write(1, "0x", 2);
	count += ft_print_p_hex(s);
	return (count);
}
