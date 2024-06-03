/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamhal <lamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:40:58 by lamhal            #+#    #+#             */
/*   Updated: 2023/12/04 17:08:39 by lamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddr(void	*x)
{
	int		i;
	size_t	n;

	i = 0;
	n = (unsigned long)x;
	i += ft_putstr("0x");
	i += ft_puthexa(n, 'p');
	return (i);
}
