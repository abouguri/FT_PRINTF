/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouguri <abouguri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 03:06:00 by abouguri          #+#    #+#             */
/*   Updated: 2023/11/30 03:57:41 by abouguri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putstr(char *str)
{
	int	i;

	if (!str)
		str = "(null)";
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_hexa_capital(unsigned int number)
{
	char	hex[9];
	int		i;
	int		remainder;
	int		count;

	count = 0;
	i = 0;
	if (number == 0)
	{
		ft_putchar('0');
		return (1);
	}
	while (number != 0)
	{
		remainder = number % 16;
		if (remainder < 10)
			hex[i++] = 48 + remainder;
		else
			hex[i++] = 55 + remainder;
		number = number / 16;
	}
	i -= 1;
	while (i >= 0)
		count += ft_putchar(hex[i--]);
	return (count);
}

int	ft_hexa(unsigned int number)
{
	char	hex[9];
	int		i;
	int		remainder;
	int		count;

	count = 0;
	i = 0;
	if (number == 0)
	{
		ft_putchar('0');
		return (1);
	}
	while (number != 0)
	{
		remainder = number % 16;
		if (remainder < 10)
			hex[i++] = 48 + remainder;
		else
			hex[i++] = 87 + remainder;
		number = number / 16;
	}
	i -= 1;
	while (i >= 0)
		count += ft_putchar(hex[i--]);
	return (count);
}
