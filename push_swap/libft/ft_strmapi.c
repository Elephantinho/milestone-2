/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:56:39 by mshahein          #+#    #+#             */
/*   Updated: 2024/11/29 18:28:39 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	unsigned int		len;
	char				*new_str;

	i = 0;
	len = ft_strlen(s);
	new_str = (char *)malloc((len + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/* char	ft_increment(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c += i;
	}
	return (c);
} */
/* #include <stdio.h>
int main()
{
	char s[] = "ciao, mondo";

	char *result = ft_strmapi(s, ft_increment);

	if (result != NULL)
	{
		printf("%s\n", result);
		free(result);
	}

	return 0;
} */
