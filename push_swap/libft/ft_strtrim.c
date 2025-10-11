/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 08:24:31 by mshahein          #+#    #+#             */
/*   Updated: 2024/11/29 13:03:29 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = NULL;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
		{
			i++;
		}
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
		{
			j--;
		}
		str = (char *)malloc(sizeof(char) * (j - i + 1));
		if (str)
		{
			ft_strlcpy(str, &s1[i], j - i + 1);
		}
	}
	return (str);
}
/* #include <stdio.h>
int main(void)
{
	char s1[] = "hd";
	char set[] = "hd";
	char *trimmed;

	trimmed = ft_strtrim(s1, set);
	if (trimmed)
	{
		printf("Original: '%s'\n", s1);
		printf("Trimmed: '%s'", trimmed);
		free(trimmed);
	}
	else
	{
		printf("Error: Memory allocation failed.\n");
	}
	return 0;
} */
