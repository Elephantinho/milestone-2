/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 23:07:09 by mshahein          #+#    #+#             */
/*   Updated: 2024/12/10 11:56:42 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char spec, va_list ap)
{
	int	count;

	count = 0;
	if (spec == 'c')
		count += ft_print_char(va_arg(ap, int));
	else if (spec == 's')
		count += ft_print_str(va_arg(ap, char *));
	else if (spec == 'd' || spec == 'i')
		count += ft_print_num(va_arg(ap, int));
	else if (spec == 'x' || spec == 'X')
		count += ft_print_hex(va_arg(ap, unsigned int), spec);
	else if (spec == 'u')
		count += ft_print_unsi(va_arg(ap, unsigned int));
	else if (spec == 'p')
		count += ft_print_void(va_arg(ap, uintptr_t));
	else if (spec == '%')
		count = write(1, "%%", 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
			count += print_format(*(++format), ap);
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}
/* #include <stdio.h>
int	main()
{
	int a = 5;
	int  b = 6;
	printf("%c", "ciao");
	printf("\n");
	ft_printf("%c", "ciao");
} */
