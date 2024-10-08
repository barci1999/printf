/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 11:22:33 by pablalva          #+#    #+#             */
/*   Updated: 2024/10/08 19:11:13 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		result;
	int		p;
	int		i;

	p = 0;
	result = 0;
	va_start(args, format);
	while (format[p] != '\0')
	{
		if (format[p] == '%')
		{
			p++;
			if (format[p] == 's')
				result += ft_putstr(va_arg(args, char *));
			else if (format[p] == 'c')
				result += ft_putchar(va_arg(args, int));
			else if (format[p] == 'd' || format[p + 1] == 'i')
				result += ft_putnbr(va_arg(args, int));
			else if (format[p] == 'u')
				result += ft_putnbrnu(va_arg(args, unsigned int));
			else if (format[p] == 'p')
				result += ft_pointer_hex(va_arg(args, int), "0123456789abcdef", 1);
			else if (format[p] == 'x')
				result += ft_hexadec(va_arg(args, int), "0123456789abcdef");
			else if (format[p] == 'X')
				result += ft_hexadec(va_arg(args, int), "0123456789ABCDEF");
			else if (format[p] == '%')
				result += ft_putchar(va_arg(args, int));
		} 
		else
			result += ft_putchar(format[p]);
		p++;
	}
	printf("%i",result);
	return (result);
}
int	main(void)
{
	ft_printf("hola%s", "cocacola");
	
	return (0);
}