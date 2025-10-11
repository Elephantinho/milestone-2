/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <mshahein@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 20:35:14 by mshahein          #+#    #+#             */
/*   Updated: 2025/03/19 13:39:18 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}
/* int main()
{
	int fd = open("file.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);

	ft_putendl_fd("Hello, World!\n", fd);

	close(fd);
	return 0;
} */
