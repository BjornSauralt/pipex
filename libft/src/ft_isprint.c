/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:26:39 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/14 13:30:57 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_isprint(int car)
{
	if ((car >= 32 && car <= 126))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isprint(97));
	return (0);
}*/
