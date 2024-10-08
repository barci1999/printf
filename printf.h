/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:34:51 by pablalva          #+#    #+#             */
/*   Updated: 2024/10/08 17:22:00 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_putchar(int c);
int	ft_putstr(const char *s);
int	ft_putnbr(int nb);
int	ft_putnbrnu(unsigned int nb);
size_t	ft_strlen(const char *s);
int	ft_pointer_hex(int nb, char *base, int flag);
int	ft_hexadec(int nb, char *base);

#endif