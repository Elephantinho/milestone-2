/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 19:08:51 by mshahein          #+#    #+#             */
/*   Updated: 2025/02/17 12:20:28 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	child_process1(int *pipefd, char **argv, char **envp)
{
	int	infile;

	infile = check_infile(argv[1]);
	if (dup2(infile, STDIN_FILENO) == -1
		|| dup2(pipefd[1], STDOUT_FILENO) == -1)
		ft_error("Dup2 failed in child_process1");
	close(infile);
	close_pipe(pipefd);
	execute(argv[2], envp);
}

void	child_process2(int *pipefd, char **argv, char **envp)
{
	int	outfile;

	outfile = check_outfile(argv[4]);
	if (dup2(pipefd[0], STDIN_FILENO) == -1
		|| dup2(outfile, STDOUT_FILENO) == -1)
		ft_error("Dup2 failed in child_process2");
	close(outfile);
	close_pipe(pipefd);
	execute(argv[3], envp);
}

void	parent_process(int *pipefd, pid_t pid1, pid_t pid2)
{
	close_pipe(pipefd);
	if (waitpid(pid1, NULL, 0) == -1 || waitpid(pid2, NULL, 0) == -1)
		perror("Waitpid failed in parent_process");
}
