/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:48:58 by mshahein          #+#    #+#             */
/*   Updated: 2024/11/25 15:27:52 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*p;
	char	*q;

	i = 0;
	p = (char *)dest;
	q = (char *)src;
	if (dest == NULL && src == NULL)
	{
		return (NULL);
	}
	while (i < n)
	{
		p[i] = q[i];
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
int main()
{
    char dest[50] = " ";
    size_t n = 9;
    memcpy(dest + 2, dest, n);
    printf("%s",dest);


}*/
