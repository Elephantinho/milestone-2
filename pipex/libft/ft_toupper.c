/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:06:49 by mshahein          #+#    #+#             */
/*   Updated: 2024/11/28 16:34:15 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	else
	{
		return (c);
	}
	return (c);
}
/*#include <stdio.h>
int main()
{
	char    c = 'c';
	char    b = 'B';
	char    a = 33;
	ft_toupper(c);
	printf("%c\n%c\n%c\n", c, b, a);
}*/
