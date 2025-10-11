/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 09:03:29 by mshahein          #+#    #+#             */
/*   Updated: 2024/12/06 13:46:12 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <stddef.h>

int	ft_printf(const char *format, ...);
int	print_format(char spec, va_list ap);
int	ft_print_char(int c);
int	ft_print_str(char *str);
int	ft_print_num(int nb);
int	ft_print_hex(unsigned int n, char spec);
int	ft_print_unsi(unsigned int nb);
int	ft_print_void(uintptr_t s);
int	ft_print_p_hex(uintptr_t s);

#endif
