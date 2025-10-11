/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:30:47 by mshahein          #+#    #+#             */
/*   Updated: 2024/11/19 22:49:07 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}
/*#include <stdio.h>
int	main()
{
	char str[50];
	char c = 'c';
	int n = 5;
	ft_memset(str, c, n);
	memset(str, c, n);
	printf("ft_memset: %s\n", str); 
	printf("memset: %s\n", str);
}*/
