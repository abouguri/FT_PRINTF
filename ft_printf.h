/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouguri <abouguri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 21:36:28 by abouguri          #+#    #+#             */
/*   Updated: 2023/12/18 15:57:58 by abouguri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_strlen(char *str);
int	ft_putstr(char *str);
int	ft_hexa_capital(unsigned int number);
int	ft_hexa(unsigned int number);
int	ft_hexaun(unsigned long number);
int	ft_putnbr(int nb);
int	ft_putnbr_un(unsigned int nb);
int	process_format(const char *placeholders, va_list args, int *i);
int	ft_printf(const char *placeholders, ...);

#endif