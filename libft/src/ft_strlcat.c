/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:35:00 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/15 13:35:01 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	j = dest_len;
	while (src[i] != '\0' && j < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	if (j < size)
		dest[j] = '\0';
	return (dest_len + src_len);
}
/*
int	main(void)
{
	char		dest1[20] = "Hello, ";
	const char	*src1 = "World!";
	size_t		size1 = sizeof(dest1);
	size_t		result1 = ft_strlcat(dest1, src1, size1);

	printf("%s Longueur: %zu\n", dest1, result1);
	return (0);
}*/