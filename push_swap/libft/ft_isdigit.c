/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:30:59 by mshahein          #+#    #+#             */
/*   Updated: 2024/11/18 15:21:38 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*#include <stdio.h>

int main()
{
   char c = '8';
   int r = ft_isdigit(c);
   int b = isdigit(c);
   printf("%d\n", r);
   printf("%d\n", b);
   

   return 0;
}*/