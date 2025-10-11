/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 07:14:10 by mshahein          #+#    #+#             */
/*   Updated: 2024/11/28 14:36:36 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_alloc_size(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
		return (1);
	if (start + len < s_len)
		return (len + 1);
	return (s_len - start + 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	alloc_size;
	char	*str;

	if (!s)
		return (NULL);
	alloc_size = ft_get_alloc_size(s, start, len);
	str = (char *)malloc(alloc_size * sizeof(char));
	if (!str)
		return (NULL);
	if (alloc_size == 1)
	{
		str[0] = '\0';
		return (str);
	}
	i = 0;
	while (i < alloc_size - 1 && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/* #include <stdio.h>
int main()
{
    char str[] = "01234";
    printf("%s", ft_substr(str, 10, 10));
} */
