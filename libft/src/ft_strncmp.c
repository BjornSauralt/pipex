/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:53:42 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/14 15:58:41 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	unsigned int	i;

	i = 0;
	while (i < size && (str1[i] || str2[i]))
	{
		if ((unsigned char)str1[i] != (unsigned char)str2[i])
			return ((unsigned char)str1[i] - ((unsigned char)str2[i]));
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	int	size;
	char	str1[] = "bonjour";
	char	str2[] = "bonjour";
	
	size = 5;
	printf("%d\n", ft_strncmp(str1, str2, size));
	return (0);
}*/
