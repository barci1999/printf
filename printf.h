/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:34:51 by pablalva          #+#    #+#             */
/*   Updated: 2024/10/07 10:36:26 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include "./libft/libft.h"
# include <stdarg.h>

int		ft_putchar(int c);
int		ft_putstr(const char *s);
void	ft_putnbr(int nb);
void	ft_putnbrnu( unsigned int nb);

#endif