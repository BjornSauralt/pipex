/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:09:36 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/15 12:09:41 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_n;
	size_t	i;
	size_t	j;

	if (!big && !little)
		return (NULL);
	if (ft_strlen(little) == 0)
		return ((char *) big);
	len_n = ft_strlen(little);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && big[i + j] == little[j] && i + j < len)
			j++;
		if (j == len_n)
			return ((char *) big + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*big = "Hello, welcome";
	const char	*little = "Hello";
	size_t		len = 40;
	char		*result = ft_strnstr(big, little, len);

	if (result)
	{
		printf("'%s' trouve, position: %ld\n", little, result - big);
	}
	else
		printf("'%s' pas trouve\n", little);
	return (0);
}*/