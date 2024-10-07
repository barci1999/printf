/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 11:22:33 by pablalva          #+#    #+#             */
/*   Updated: 2024/10/07 18:05:12 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdarg.h>

int ft_printf(char const *format, ...)
{
	va_list args;
	int result;
	int p;
	p = 0;
	result = 0;
	va_start(args,format);
	while(format[p] != '\0')
	{
		if(format[p] == '%')
		{
			if(format[p + 1] == 's')
				ft_putstr(va_arg(args,char*));
			else if(format[p + 1] == 'c')
				ft_putchar(va_arg(args,int));
			else if (format[p + 1] == 'd' || 'i')
				ft_putnbr(va_arg(args,int));
			else if (format[p + 1]== 'u')
				ft_putnbru(va_arg(args,unsigned int));
			else if(format[p + 1] == 'p')
				ft_pointer_hex(va_arg(args,void *));
			else if(format[p+1] == 'x')
				ft_hexadec(va_arg(args,size_t));
			else if(format[p + 1] == 'X')
				ft_toupperstr(ft_hexadec(va_arg(args,size_t)));
			else if (format[p + 1] == '%')
				ft_putchar(va_arg(args,int));
		}
		ft_putchar(format[p]);
		p++;
		result++;
	}
	return(result);
}
int main(void)
{
	ft_printf("%s","hola");
	return(0);
}