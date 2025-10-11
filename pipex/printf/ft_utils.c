/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 08:54:42 by mshahein          #+#    #+#             */
/*   Updated: 2024/12/06 14:09:14 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int c)
{
	return (write(1, &c, 1));
}

int	ft_print_str(char *str)
{
	int	count;

	count = 0;
	if (str == NULL)
		return (write(1, "(null)", 6));
	while (*str)
	{
		ft_print_char(*str);
		count++;
		str++;
	}
	return (count);
}

int	ft_print_num(int nb)
{
	char	n;
	int		count;

	count = 0;
	if (nb == -2147483648)
	{
		count += write(1, "-2147483648", 11);
		return (count);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		count++;
		nb *= -1;
	}
	if (nb >= 10)
		count += ft_print_num(nb / 10);
	n = (nb % 10) + '0';
	count += write(1, &n, 1);
	return (count);
}

int	ft_print_hex(unsigned int n, char spec)
{
	int		count;
	char	*base;

	count = 0;
	if (spec == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n == 0)
		return (write(1, "0", 1));
	if (n >= 16)
		count += ft_print_hex(n / 16, spec);
	count += write(1, &base[n % 16], 1);
	return (count);
}

int	ft_print_unsi(unsigned int nb)
{
	char	n;
	int		count;

	count = 0;
	if (nb >= 10)
		count += ft_print_unsi(nb / 10);
	n = (nb % 10) + '0';
	count += write(1, &n, 1);
	return (count);
}
