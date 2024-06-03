/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamhal <lamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:13:13 by lamhal            #+#    #+#             */
/*   Updated: 2024/01/07 12:18:30 by lamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	type(va_list args, char ch)
{
	int	i;

	i = 0;
	if (ch == 'c')
		i += ft_putchar(va_arg(args, int));
	else if (ch == 's')
		i += ft_putstr(va_arg(args, char *));
	else if (ch == 'u')
		i += ft_put_unsg(va_arg(args, unsigned int));
	else if (ch == 'd' || ch == 'i')
		i += ft_putnbr(va_arg(args, int));
	else if (ch == 'x')
		i += ft_put_hxlwr(va_arg(args, unsigned int));
	else if (ch == 'X')
		i += ft_put_hxupr(va_arg(args, unsigned int));
	else if (ch == 'p')
		i += ft_putaddr(va_arg(args, void *));
	else
		i += ft_putchar(ch);
	return (i);
}

int	ft_printf(const char *format, ...)
{
	size_t	i;
	int		l;
	va_list	args;

	i = 0;
	l = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 0)
				break ;
			else if (format[i])
				l += type(args, format[i]);
		}
		else
			l += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (l);
}
#include <stdio.h>

int main()
{
	int	x = -5468452564898;
	ft_printf("%x\n", x);
	printf("%x\n", x);
	
}