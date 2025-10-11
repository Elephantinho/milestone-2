/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:44:56 by mshahein          #+#    #+#             */
/*   Updated: 2024/11/25 20:03:11 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	else if (n == 0)
		return (dest);
	s = (char *)src;
	d = (char *)dest;
	if (d < s)
		ft_memcpy(d, s, n);
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (d);
}
/*#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "Hello, world!";
    char dest[10] = "c";

    printf("Before ft_memmove:\n");
    printf("src: %s\n", src);
    printf("dest: '%s'\n", dest);

    ft_memmove(dest, src, 13);

    printf("\nAfter ft_memmove:\n");
    printf("src: %s\n", src);
    printf("dest: %s\n", dest);

    return (0);
}*/
