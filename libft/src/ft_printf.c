/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:59:21 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/30 12:59:24 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	print_format(const char format, va_list arg)
{
	int	i;

	i = 0;
	if (format == 'c')
		i += ft_printchr(va_arg(arg, int));
	else if (format == 's')
		i += ft_printstr(va_arg(arg, char *));
	else if (format == 'd' || format == 'i')
		i += ft_printnbr(va_arg(arg, int));
	else if (format == 'x' || format == 'X')
		i += ft_printhex(va_arg(arg, unsigned int), format);
	else if (format == '%')
		i += ft_printpercent();
	else if (format == 'p')
		i += ft_printptr(va_arg(arg, unsigned long long));
	else if (format == 'u')
		i += ft_printunsigned(va_arg(arg, unsigned int));
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;

	va_start(arg, format);
	i = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			i += print_format(*(++format), arg);
		else
			i += write (1, format, 1);
		++format;
	}
	va_end(arg);
	return (i);
}
/*
int	main(void) 
{
	ft_printf("ma fonction : %p %p", (void *)0, (void *)0);
	printf("vraie fonction : %p %p", (void *)0, (void *)0);
	return (0);
}*/
