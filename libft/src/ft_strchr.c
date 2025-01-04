/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:19:53 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/14 15:44:48 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const char *str, int car)
{
	int	valeur;

	valeur = 0;
	if ((char)car == '\0')
		return ((char *)str + ft_strlen(str));
	while (str[valeur] != '\0')
	{
		if (str[valeur] == (char)car)
			return ((char *)str + valeur);
		valeur++;
	}
	if (str[valeur] == (char) car)
		return ((char *) str + valeur);
	return (NULL);
}
/*
int	main(void)
{
	char s[] = "ababtxv";

	printf("%s\n", strchr(s, 't'));
	printf("%s\n", ft_strchr(s, 't'));
	return (0);
}*/