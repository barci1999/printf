/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrnu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:35:48 by pablalva          #+#    #+#             */
/*   Updated: 2024/10/08 17:35:22 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbrnu(unsigned int nb)
{
	int count;
	count = 0;
	if (nb > 9)
		ft_putnbrnu(nb / 10);
	count += ft_putchar((nb % 10) + '0');
	return(count);
}
/*int main(void)
{
	unsigned int nb;
	nb = 34688465;
	ft_putnbrnu(nb);
	return(0);
}*/