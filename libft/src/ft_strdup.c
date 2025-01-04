/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <mgarsaul@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-16 09:55:47 by mgarsaul          #+#    #+#             */
/*   Updated: 2024-10-16 09:55:47 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	i = 0;
	while (src[len])
		++len;
	str = (char *) malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void) 
{
	const	char *original = NULL;
	char	*duplicate;

	duplicate = ft_strdup(original);
	printf("Chaîne d'origine: %s\n", original);
	printf("Chaîne dupliquée: %s\n", duplicate);
	free(duplicate);

		const	char *original1 = NULL;
	char	*duplicate1;

	duplicate1 = strdup(original1);
	printf("Chaîne d'origine fonction origine: %s\n", original1);
	printf("Chaîne dupliquée fonction origine: %s\n", duplicate1);
	free(duplicate);
	return (0);
}*/