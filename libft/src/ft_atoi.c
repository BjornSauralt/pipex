/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:23:15 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/15 14:23:16 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_atoi(const char *nbr)
{
	int		valeur;
	int		negatif;
	size_t	i;

	valeur = 0;
	negatif = 1;
	i = 0;
	while (nbr[i] == ' ' || ('\t' <= nbr[i] && nbr[i] <= '\r'))
		i++;
	if (nbr[i] == '+')
		i++;
	else if (nbr[i] == '-')
	{
		negatif *= -1;
		i++;
	}
	while (nbr[i] >= '0' && nbr[i] <= '9')
	{
		valeur = valeur * 10 + nbr[i] - '0';
		i++;
	}
	return (valeur * negatif);
}
/*
int main(void)
{
	const char *str1 = "   1234";
	const char *str2 = "   -5678";
	const char *str3 = "   +9012";
	const char *str4 = "   42abc";
	const char *str5 = "   -0";

	printf("Conversion de '%s': %d\n", str1, ft_atoi(str1));
	printf("Conversion de '%s': %d\n", str2, ft_atoi(str2));
	printf("Conversion de '%s': %d\n", str3, ft_atoi(str3));
	printf("Conversion de '%s': %d\n", str4, ft_atoi(str4));
	printf("Conversion de '%s': %d\n", str5, ft_atoi(str5));

	return 0;
}*/
