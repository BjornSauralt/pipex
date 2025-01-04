/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsr_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <mgarsaul@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-17 10:16:02 by mgarsaul          #+#    #+#             */
/*   Updated: 2024-10-17 10:16:02 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	val;

	val = 0;
	while (str[val])
	{
		write(fd, &str[val], 1);
		val++;
	}
}
/*
int	main(void)
{
	int	fd = open("output.txt", O_WRONLY | O_CREAT, 0644);

	ft_putstr_fd("hola", fd);
	close(fd);
	return 0;
}*/
