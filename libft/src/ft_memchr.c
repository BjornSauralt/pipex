/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:11:15 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/14 17:20:45 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *arr, int search, size_t size)
{
	unsigned char	*str;
	size_t			val;

	str = (unsigned char *)arr;
	val = 0;
	while (val < size)
	{
		if (str[val] == (unsigned char)search)
			return ((void *)&str[val]);
		val++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char arr[] = "Hello, World!";
	char search = 'a';
	char *result;

	result = (char *)ft_memchr(arr, search, strlen(arr));

	if (result != NULL)
		printf("Caractère '%c' trouvé à l'adresse : %p\n", search, result);
	else
		printf("Caractère '%c' non trouvé.\n", search);

	return (0);
}*/