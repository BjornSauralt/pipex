/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:12:16 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/14 13:51:04 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_toupper(int car)
{
	if (car >= 97 && car <= 122)
		return (car -= 32);
	else
		return (car);
}
/*
int	main(void)
{
	int	i = 0;
	char	test_chars[] = {'a'};
	char	upper_char = ft_toupper(test_chars[i]);

	printf("ft_toupper('%c') = '%c'\n", test_chars[i], upper_char);
	return (0);
}*/
