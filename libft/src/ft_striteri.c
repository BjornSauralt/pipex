/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <mgarsaul@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-17 10:14:43 by mgarsaul          #+#    #+#             */
/*   Updated: 2024-10-17 10:14:43 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	val;

	val = 0;
	while (s[val])
	{
		(*f)(val, s + val);
		val++;
	}
}
/*
void	print_index_char(unsigned int index, char *c) 
{
	printf("Index: %u, Character: %c\n", index, *c);
}

int	main(void)
{
	char str[] = "Hello, world!";

	ft_striteri(str, print_index_char);
	return (0);
}*/
