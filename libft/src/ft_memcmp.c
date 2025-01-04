/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:21:12 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/15 11:21:16 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t size)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)arr1;
	str2 = (const unsigned char *)arr2;
	if (!size)
		return (0);
	while (size--)
	{
		if (*str1++ != *str2++)
			return (*(--str1) - *(--str2));
	}
	return (0);
}
/*
int	main(void)
{
	char arr1[] = "Hello, World!";
	char arr2[] = "Hello, World!";
	size_t	size = 13;
	int result1 = ft_memcmp(arr1, arr2, size);
	
	if (result1 == 0)
		printf("arr1 et arr2 sont identiques.\n");
	else
		printf("arr1 et arr2 sont différents (resultat: %d).\n", result1);
	return 0;
}*/