/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouguri <abouguri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 03:06:11 by abouguri          #+#    #+#             */
/*   Updated: 2023/12/08 17:27:44 by abouguri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_hexaun(unsigned long number)
{
	char	hex[19];
	int		i;
	int		remainder;
	int		count;

	count = 0;
	i = 0;
	if (number == 0)
		return (ft_putstr("0x0"));
	count += write(1, "0x", 2);
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

int	ft_putnbr(int nb)
{
	char		arr[11];
	int			i;
	int			count;
	long long	n;

	n = nb;
	i = 0;
	count = 0;
	if (n == 0)
		return (ft_putchar('0'));
	if (n < 0)
	{
		count += ft_putchar('-');
		n *= -1;
	}
	while (n >= 10)
	{
		arr[i++] = n % 10 + 48;
		n /= 10;
	}
	arr[i] = n + 48;
	while (i >= 0)
		count += ft_putchar(arr[i--]);
	return (count);
}

int	ft_putnbr_un(unsigned int nb)
{
	char				arr[20];
	int					i;
	int					count;
	unsigned long long	n;

	n = nb;
	i = 0;
	count = 0;
	if (n == 0)
		return (ft_putchar('0'));
	while (n >= 10)
	{
		arr[i++] = n % 10 + 48;
		n /= 10;
	}
	arr[i] = n + 48;
	while (i >= 0)
		count += ft_putchar(arr[i--]);
	return (count);
}
