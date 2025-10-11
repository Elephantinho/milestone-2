/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 07:35:19 by mshahein          #+#    #+#             */
/*   Updated: 2024/11/28 14:10:58 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*str;
	char		*r;
	size_t		len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(len * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	r = str;
	while (*s1 != '\0')
	{
		*str = *s1;
		s1++;
		str++;
	}
	while (*s2 != '\0')
	{
		*str = *s2;
		str++;
		s2++;
	}
	*str = '\0';
	return (r);
}
/* #include <stdio.h>
int main()
{
	char s1[] = "ciao,";
	char s2[] = " mondo";
	printf("%s", ft_strjoin(s1, s2));
} */
