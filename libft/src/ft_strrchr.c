/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:45:20 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/14 15:53:05 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(char *str, int car)
{
	int	valeur;

	valeur = ft_strlen(str);
	while (valeur >= 0)
	{
		if (str[valeur] == (char) car)
			return ((char *) str + valeur);
		valeur--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "Haello, Worlad!";
	char	car = 'a';
	char	*result = ft_strrchr(str, car);

	if (result != NULL)
	{
		printf("'%c' est a l'index : %ld\n", car, result - str);
	}
	else 
		printf("'%c' non trouve\n", car);
	return (0);
}*/