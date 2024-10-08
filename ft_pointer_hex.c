/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:31:27 by pablalva          #+#    #+#             */
/*   Updated: 2024/10/08 17:16:12 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_pointer_hex(int nb, char *base, int flag)
{
	long	size;
	long	num;
	int count;
	count = 0;

	num = nb;
	size = ft_strlen(base);
	if (flag)
		count += ft_putstr("0x");
	if (num < 0)
		num = num * -1;
	if (num >= size)
		ft_pointer_hex(nb / size, base, 0);
	count += write(1, &base[num % size], 1);
	return (count);
}
