/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:10:28 by mshahein          #+#    #+#             */
/*   Updated: 2025/02/17 14:38:46 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*find_path(char *cmd, char **envp)
{
	char	**paths;
	char	*full_path;

	paths = get_paths_from_env(envp);
	if (!paths)
		return (NULL);
	full_path = find_command_in_paths(cmd, paths);
	return (full_path);
}

int	main(int argc, char **argv, char **envp)
{
	int		pipefd[2];
	pid_t	pid1;
	pid_t	pid2;

	if (argc != 5)
	{
		ft_printf("Usage: %s infile cmd1 cmd2 outfile\n", argv[0]);
		return (EXIT_FAILURE);
	}
	if (pipe(pipefd) == -1)
		ft_error("Pipe failed");
	pid1 = fork();
	if (pid1 < 0)
		ft_error("Fork failed for child_process1");
	if (pid1 == 0)
		child_process1(pipefd, argv, envp);
	pid2 = fork();
	if (pid2 < 0)
		ft_error("Fork failed for child_process2");
	if (pid2 == 0)
		child_process2(pipefd, argv, envp);
	parent_process(pipefd, pid1, pid2);
	return (EXIT_SUCCESS);
}
