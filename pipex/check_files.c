/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_files.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 19:09:47 by mshahein          #+#    #+#             */
/*   Updated: 2025/02/14 21:40:23 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	check_infile(char *filename)
{
	int	infile;

	infile = open(filename, O_RDONLY);
	if (infile < 0)
	{
		perror("Failed to open infile");
		exit(EXIT_FAILURE);
	}
	return (infile);
}

int	check_outfile(char *filename)
{
	int	outfile;

	outfile = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (outfile < 0)
	{
		perror("Failed to open outfile");
		exit(EXIT_FAILURE);
	}
	return (outfile);
}
