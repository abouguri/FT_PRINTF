/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouguri <abouguri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 03:05:41 by abouguri          #+#    #+#             */
/*   Updated: 2023/11/30 22:37:51 by abouguri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	process_format(const char *placeholders, va_list args, int *i)
{
	int	count;

	count = 0;
	if (placeholders[*i] == '%' && (placeholders[*i + 1] == 'd'
			|| placeholders[*i + 1] == 'i'))
		count += ft_putnbr(va_arg(args, int));
	else if (placeholders[*i] == '%' && placeholders[*i + 1] == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (placeholders[*i] == '%' && placeholders[*i + 1] == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (placeholders[*i] == '%' && placeholders[*i + 1] == 'u')
		count += ft_putnbr_un(va_arg(args, unsigned int));
	else if (placeholders[*i] == '%' && (placeholders[*i + 1] == 'x'))
		count += ft_hexa(va_arg(args, unsigned int));
	else if (placeholders[*i] == '%' && (placeholders[*i + 1] == 'X'))
		count += ft_hexa_capital(va_arg(args, unsigned int));
	else if (placeholders[*i] == '%' && placeholders[*i + 1] == 'p')
		count += ft_hexaun(va_arg(args, unsigned long));
	else if (placeholders[*i] == '%' && placeholders[*i + 1] == '%')
		count += ft_putchar('%');
	else
		count += ft_putchar(placeholders[*i]);
	if (placeholders[*i] == '%' && placeholders[*i + 1] != '\0')
		(*i)++;
	return (count);
}

int	ft_printf(const char *placeholders, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, placeholders);
	i = 0;
	count = 0;
	while (placeholders[i])
	{
		count += process_format(placeholders, args, &i);
		i++;
	}
	va_end(args);
	return (count);
}
