/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamhal <lamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:39:51 by lamhal            #+#    #+#             */
/*   Updated: 2023/12/04 18:25:34 by lamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stddef.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_puthexa(unsigned long n, char c);
int		ft_put_hxupr(unsigned int n);
int		ft_put_hxlwr(unsigned int n);
int		ft_putaddr(void *x);
int		ft_put_unsg(unsigned int n);
int		ft_putnbr(int nbr);	

#endif