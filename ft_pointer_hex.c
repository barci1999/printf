/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:31:27 by pablalva          #+#    #+#             */
/*   Updated: 2024/10/08 14:01:37 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include "printf.h"

void	ft_pointer_hex(int nb, char *base ,int flag)
{
	long	size;
	long 	num;
	
	num = nb;
	size = ft_strlen(base);
	if(flag)
		ft_putstr("0x");
	if(num < 0)
		num = num * -1;
	if(num >= size)
		ft_pointer_hex( nb / size ,base , 1);
	write(1, &base[num % size], 1);
}
