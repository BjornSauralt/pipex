/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <mgarsaul@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-13 14:35:27 by mgarsaul          #+#    #+#             */
/*   Updated: 2024-12-13 14:35:27 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, const char *src, int n)
{
	int	val;

	val = 0;
	while (val < n && src[val] != '\0')
	{
		dest[val] = src[val];
		val++;
	}
	while (val < n)
	{
		dest[val] = '\0';
		val++;
	}
	return (dest);
}
