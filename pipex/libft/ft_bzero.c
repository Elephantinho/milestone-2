/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:20:20 by mshahein          #+#    #+#             */
/*   Updated: 2024/11/28 14:55:52 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/* int main(void)
{
	char str1[20] = "Hello, world!";
	char str2[20] = "Hello, world!";

	printf("%s\n", str1);
	printf("%s\n", str2);

	ft_bzero(str1, 5);

	bzero(str2, 5);
	printf("%s\n", str1);
	printf("%s\n", str2);

	return 0;
} */
