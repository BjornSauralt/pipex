/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <mgarsaul@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-04 12:50:55 by mgarsaul          #+#    #+#             */
/*   Updated: 2025-01-04 12:50:55 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	exit_handler(int n_exit)
{
	if (n_exit == 1)
		perror("Error");
	exit(0);
}

void	exec(char *cmd, char **env)
{
	char	**s_cmd;
	char	*path;

	s_cmd = ft_split(cmd, ' ');
	path = get_path(s_cmd[0], env);
	if (!path)
	{
		perror("pipex: commande introuvable");
		ft_free_tab(s_cmd);
		exit(1);
	}
	if (execve(path, s_cmd, env) == -1)
	{
		perror("pipex: erreur lors de l'exécution de la commande: ");
		ft_free_tab(s_cmd);
		exit(1);
	}
	ft_free_tab(s_cmd);
}

void	child(char **av, int *pipe_fd, char **env)
{
	int	fd;

	fd = open_file(av[1], 0);
	dup2(fd, 0);
	dup2(pipe_fd[1], 1);
	close(fd);
	close(pipe_fd[0]);
	close(pipe_fd[1]);
	exec(av[2], env);
}

void	parent(char **av, int *pipe_fd, char **env)
{
	int	fd;

	fd = open_file(av[4], 1);
	dup2(fd, 1);
	dup2(pipe_fd[0], 0);
	close(fd);
	close(pipe_fd[0]);
	close(pipe_fd[1]);
	exec(av[3], env);
}

int	main(int argc, char **argv, char **env)
{
	int		pipe_fd[2];
	pid_t	pid;
	pid_t	pid2;

	if (argc != 5)
	{
		ft_printf("%s\n", "Wrong number of arguments");
		exit(1);
	}
	if (pipe(pipe_fd) == -1)
		exit_handler(-1);
	pid = fork();
	if (pid == -1)
		exit_handler(-1);
	if (pid == 0)
		child(argv, pipe_fd, env);
	pid2 = fork();
	if (pid2 == -1)
		exit_handler(-1);
	if (pid2 == 0)
		parent(argv, pipe_fd, env);
	close(pipe_fd[0]);
	close(pipe_fd[1]);
	waitpid(pid, NULL, 0);
	waitpid(pid2, NULL, 0);
}
