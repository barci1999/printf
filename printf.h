/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:34:51 by pablalva          #+#    #+#             */
/*   Updated: 2024/10/07 18:04:34 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
//# include "./libft/libft.h"
# include <stdarg.h>

int		ft_putchar(int c);
int		ft_putstr(const char *s);
void	ft_putnbr(int nb);
void	ft_putnbrnu( unsigned int nb);
size_t	ft_strlen(const char *s);
void *toupperstr(char * str);
void	*ft_pointer_hex(void *nb);
void	*ft_hexadec(size_t nb);

#endif