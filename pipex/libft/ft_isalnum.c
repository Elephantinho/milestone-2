/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:47:08 by mshahein          #+#    #+#             */
/*   Updated: 2024/11/18 14:57:17 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*#include <stdio.h>
#include <ctype.h>

int main()
{
   char c = 'b';
   int r = ft_isalnum(c);
   int b = isalnum(c);
   printf("%d\n", r);
   printf("%d\n", b);
   

   return 0;
}*/