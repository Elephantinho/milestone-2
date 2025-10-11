/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 14:21:40 by mshahein          #+#    #+#             */
/*   Updated: 2024/11/29 19:03:57 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	int	num_words;
	int	flag;

	num_words = 0;
	flag = 0;
	while (*s != '\0')
	{
		if (*s == c)
			flag = 0;
		else if (flag == 0)
		{
			num_words++;
			flag = 1;
		}
		s++;
	}
	return (num_words);
}

static char	**ft_allocate(char **dest, const char *s, const char c)
{
	int		n;
	char	**temp;

	temp = dest;
	while (*s)
	{
		while (*s == c)
			s++;
		n = 0;
		while (s[n] != c && s[n] != '\0')
			n++;
		if (n > 0)
		{
			*temp = ft_substr(s, 0, n);
			if (!*temp)
				return (NULL);
		}
		temp++;
		s = s + n;
	}
	return (temp);
}

char	**ft_split(char const *s, char c)
{
	char		**array;
	size_t		words;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	array = (char **)ft_calloc(words + 1, sizeof(char *));
	if (!array)
		return (NULL);
	ft_allocate(array, s, c);
	array[words] = NULL;
	return (array);
}
