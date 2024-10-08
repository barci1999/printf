/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:34:51 by pablalva          #+#    #+#             */
/*   Updated: 2024/10/08 13:55:45 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
//# include "./libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(int c);
void	ft_putstr(const char *s);
void	ft_putnbr(int nb);
void	ft_putnbrnu(unsigned int nb);
size_t	ft_strlen(const char *s);
void	ft_toupperstr(char *str);
void	ft_pointer_hex(int nb, char *base, int flag);
void	ft_hexadec(int nb, char *base);

#endif