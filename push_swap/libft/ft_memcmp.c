/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:36:30 by mshahein          #+#    #+#             */
/*   Updated: 2024/11/25 20:32:30 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*one;
	unsigned char		*two;

	if (n == 0)
		return (0);
	one = (unsigned char *)s1;
	two = (unsigned char *)s2;
	i = 0;
	while (one[i] == two[i] && i < n - 1)
	{
		i++;
	}
	return (one[i] - two[i]);
}
/*#include <stdio.h>

int main()
{
    unsigned char s1[] = "ciao, mondo";
    unsigned char s2[] = "ciao, nondo";

    printf("%d", ft_memcmp(s1, s2, 0));
}*/
