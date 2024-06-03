/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamhal <lamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 19:36:21 by lamhal            #+#    #+#             */
/*   Updated: 2023/12/04 17:10:55 by lamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long n, char c)
{
	int		i;
	char	*str;

	i = 0;
	if (c != 'x' && c != 'X' && c != 'p')
		return (0);
	str = "0123456789abcdef";
	while (n > 15)
	{
		i += ft_puthexa(n / 16, c);
		n %= 16;
	}
	if (n > 9 && c == 'X')
		i += ft_putchar(str[n] - 32);
	else
		i += ft_putchar(str[n]);
	return (i);
}
