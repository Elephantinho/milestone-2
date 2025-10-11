/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 22:18:17 by mshahein          #+#    #+#             */
/*   Updated: 2024/11/24 13:07:31 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;

	a = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (a[i] == (unsigned char)c)
		{
			return (a + i);
		}
		i++;
	}
	return (NULL);
}
/*  #include <stdio.h>
int main()
{
	 char str[] = "ciao";
	 char *ch = ft_memchr(str, 105 + 256 , 5);

	 printf("%s",(unsigned char*)ch);
	 return 0;
} */
