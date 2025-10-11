/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:56:32 by mshahein          #+#    #+#             */
/*   Updated: 2024/11/28 15:10:05 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*p;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i++;
	p = malloc(i * sizeof(char));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*#include <stdio.h>
int main()
{
	char s[] = "addio";
	char *str = (char *)ft_strdup(s);

	if (str != NULL)
	{
		printf("%s\n", str);
		free(str);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}

	return 0;
}*/
