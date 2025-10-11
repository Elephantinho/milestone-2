/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:09:08 by mshahein          #+#    #+#             */
/*   Updated: 2024/11/24 20:31:41 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	j = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = dst_len;
	if (size <= dst_len)
	{
		return (size + src_len);
	}
	while (src[j] != '\0' && (i + 1) < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (src_len + dst_len);
}
/*  #include <stdio.h>
int	main()
{
	char	dest[] = "there is no stars in the sky";
	char	src[] = "the cake is a lie !";
	size_t	len = 35;
	printf("%ld\n", ft_strlcat(dest, src, len));
	ft_strlcat(dest, src, len);
	printf("%s", dest);
} */
