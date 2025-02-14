/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <mgarsaul@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-04 13:57:09 by mgarsaul          #+#    #+#             */
/*   Updated: 2025-01-04 13:57:09 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	open_file(char *file, int in_or_out)
{
	int	ret;

	if (in_or_out == 0)
		ret = open(file, O_RDONLY);
	if (in_or_out == 1)
		ret = open(file, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (ret == -1)
		exit(0);
	return (ret);
}

void	ft_free_tab(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

char	*ft_getenv(char *name, char **env)
{
	int		i;
	int		j;
	char	*sub;

	i = 0;
	while (env[i])
	{
		j = 0;
		while (env[i][j] && env[i][j] != '=')
			j++;
		sub = ft_substr(env[i], 0, j);
		if (ft_strcmp(sub, name) == 0)
		{
			free(sub);
			return (env[i] + j + 1);
		}
		free(sub);
		i++;
	}
	return (NULL);
}

char	*construct_exec_path(char *cmd, char **allpath)
{
	int		i;
	char	*exec;
	char	*path_part;

	i = -1;
	while (allpath[++i])
	{
		path_part = ft_strjoin(allpath[i], "/");
		exec = ft_strjoin(path_part, cmd);
		free(path_part);
		if (access(exec, F_OK | X_OK) == 0)
			return (exec);
		free(exec);
	}
	return (NULL);
}

char	*get_path(char *cmd, char **env)
{
	char	**allpath;
	char	*exec;
	char	**s_cmd;
	char	*path_env;

	path_env = ft_getenv("PATH", env);
	if (!path_env)
		return (NULL);
	allpath = ft_split(path_env, ':');
	if (!allpath)
		return (NULL);
	s_cmd = ft_split(cmd, ' ');
	if (!s_cmd || !s_cmd[0])
	{
		ft_free_tab(s_cmd);
		ft_free_tab(allpath);
		return (NULL);
	}
	exec = construct_exec_path(s_cmd[0], allpath);
	ft_free_tab(s_cmd);
	ft_free_tab(allpath);
	return (exec);
}
