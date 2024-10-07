/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrnu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:35:48 by pablalva          #+#    #+#             */
/*   Updated: 2024/10/07 18:04:54 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
//#include "libft.h"

void	ft_putnbrnu( unsigned int nb)
{
	if (nb > 9)
		ft_putnbrnu(nb / 10);
	ft_putchar((nb % 10) + '0');
}
/*int main(void)
{
	unsigned int nb;
	nb = 34688465;
	ft_putnbrnu(nb);
	return(0);
}*/