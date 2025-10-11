/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 19:24:54 by mshahein          #+#    #+#             */
/*   Updated: 2024/11/21 12:35:43 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
		{
			i++;
		}
		return (i);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*#include <stdio.h>
int main()
{
    char src[] = "Hello, world!";
    char dst[2] = "ci";
	
    int len = ft_strlcpy(dst, src, 10);

    printf("src: %s\n", src);
    printf("dst: %s\n", dst);
    printf("Length of src: %d\n", len);
    return 0;
}*/
