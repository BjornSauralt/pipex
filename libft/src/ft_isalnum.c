/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:13:19 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/14 13:17:10 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_isalnum(int car)
{
	if (((car >= 'a' && car <= 'z'))
		|| ((car >= 'A' && car <= 'Z'))
		|| ((car >= '0' && car <= '9')))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isalnum(97));
	return (0);
}*/
