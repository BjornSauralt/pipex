/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:43:08 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/16 10:43:11 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*array;

	if (nmemb > __SIZE_MAX__ / size)
		return (NULL);
	if (nmemb == 0 && size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	array = (size_t *) malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, nmemb * size);
	return (array);
}
/*
int	main(void)
{
	int	*arr;
	size_t	n = 5;
	size_t	i;

	i = 0;
	arr = (int *)ft_calloc(5, 1);
	if (!arr)
	{
		printf("Erreur : echec de l'allocation memoire\n");
		return (1);
	}
	printf("Contenu du tableau alloue :\n");
	while (i < n)
	{
		printf("arr[%zu] = %d\n", i, arr[i]);
		i++;
	}
	free(arr);

	return (0);
}*/
