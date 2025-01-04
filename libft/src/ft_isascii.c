/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:21:34 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/14 13:25:54 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_isascii(int car)
{
	if ((car >= 0 && car <= 127))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isascii(97));
	return (0);
}*/
