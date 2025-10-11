/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:27:40 by mshahein          #+#    #+#             */
/*   Updated: 2024/11/29 14:30:59 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (nmemb == 0 || size == 0)
	{
		total = 0;
	}
	else
	{
		total = nmemb * size;
	}
	ptr = malloc(total);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, (total));
	return (ptr);
}
/* #include <stdio.h>
int	main()
{
	size_t	*array;
	size_t	n = 10;
	size_t	size = sizeof(size_t);

	array = ft_calloc(n, size);
	size_t  i = 0;

	while (i < n)
	{
		printf("%zu", array[i]);
		i++;
	}
	free(array);
} */
