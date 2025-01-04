/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:11 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/14 14:16:26 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_tolower(int car)
{
	if (car >= 65 && car <= 90)
		return (car += 32);
	else
		return (car);
}
/*
int	main(void)
{
	int	i = 0;
	char	test_chars[] = {'A'};
	char	lower_char = ft_tolower(test_chars[i]);

	printf("ft_tolower('%c') = '%c'\n", test_chars[i], lower_char);
	return (0);
}*/
