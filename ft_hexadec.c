/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 15:48:13 by pablalva          #+#    #+#             */
/*   Updated: 2024/10/08 17:36:04 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_hexadec(int nb, char *base)
{
	long	size;
	long	num;
	int count;
	count = 0;

	num = nb;
	size = ft_strlen(base);
	if (num < 0)
	{
		count = write(1, "-", 1);
		num = num * -1;
	}
	if (num >= size)
		ft_hexadec(num / size, base);
	count += write(1, &base[num % size], 1);
	return(count);
}
