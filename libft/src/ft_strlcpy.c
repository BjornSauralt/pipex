/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:12:27 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/15 12:12:30 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	valeur;

	valeur = 0;
	if (size > 0)
	{
		while (src[valeur] && valeur < size - 1)
		{
			dest[valeur] = src[valeur];
			valeur++;
		}
		dest[valeur] = '\0';
	}
	while (src[valeur])
		valeur++;
	return (valeur);
}
/*
int	main(void)
{
	char	src[] = "Hello, World!";
	char	dest[20];
	int		result;

	result = ft_strlcpy(dest, src, sizeof(dest));
	printf("Dest: %s\n", dest);
	printf("%zu\n", result);

	result = strncpy(dest, src, sizeof(dest));
	printf("Dest: %s\n", dest);
	printf("%zu\n", result);
	return (0);
}*/
