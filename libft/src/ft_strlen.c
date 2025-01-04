/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:03:06 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/14 14:09:20 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlen(const char *str)
{
	int	valeur;

	valeur = 0;
	while (str[valeur])
		valeur++;
	return (valeur);
}
/*
int	main(void)
{
	printf("%ld\n", ft_strlen("dayid"));
	return (0);
}*/
