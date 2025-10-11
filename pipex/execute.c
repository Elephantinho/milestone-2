/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 19:10:42 by mshahein          #+#    #+#             */
/*   Updated: 2025/02/17 12:18:07 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	execute(char *cmd, char **envp)
{
	char	**args;
	char	*path;

	args = ft_split(cmd, ' ');
	if (!args)
		ft_error("Split failed in execute");
	path = find_path(args[0], envp);
	if (!path)
	{
		free_paths(args);
		ft_error("Command execution failed");
	}
	execve(path, args, envp);
	perror("Execve failed in execute");
	free(path);
	free_paths(args);
	exit(EXIT_FAILURE);
}
