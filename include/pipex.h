/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <mgarsaul@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-04 12:51:01 by mgarsaul          #+#    #+#             */
/*   Updated: 2025-01-04 12:51:01 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "../libft/includes/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>  
# include <stdlib.h>

int		main(int argc, char **argv, char **env);
void	exec(char *cmd, char **env);
void	enfant(char **av, int *pipe_fd, char **env);
void	parent(char **av, int *pipe_fd, char **env);
void	exit_handler(int n_exit);
int		open_file(char *file, int in_or_out);
void	ft_free_tab(char **tab);
char	*my_getenv(char *name, char **env);
char	*get_path(char *cmd, char **env);
int	ft_strcmp(char *s1, char *s2);

#endif