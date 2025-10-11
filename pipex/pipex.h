/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:09:08 by mshahein          #+#    #+#             */
/*   Updated: 2025/02/17 13:22:06 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <sys/wait.h>
# include <fcntl.h>
# include "libft/libft.h"
# include "printf/ft_printf.h"

char	*getenv_path(char **envp);
void	free_paths(char **paths);
char	*build_path(char *dir, char *cmd);
char	*find_path(char *cmd, char **envp);
void	ft_error(char *msg);
void	execute(char *cmd, char **envp);
int		check_infile(char *filename);
int		check_outfile(char *filename);
void	close_pipe(int *pipefd);
void	child_process1(int *pipefd, char **argv, char **envp);
void	child_process2(int *pipefd, char **argv, char **envp);
void	parent_process(int *pipefd, pid_t pid1, pid_t pid2);
int		main(int argc, char **argv, char **envp);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strcat(char *dst, const char *src);
char	**get_paths_from_env(char **envp);
char	*find_command_in_paths(char *cmd, char **paths);

#endif
