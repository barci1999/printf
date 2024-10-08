/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 15:48:13 by pablalva          #+#    #+#             */
/*   Updated: 2024/10/08 13:48:19 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include "printf.h"

void	ft_hexadec(int nb,char *base)
{
	long size;
	long num;
	num = nb;
	size = ft_strlen(base);
	if(num < 0)
	{
		write(1,"-",1);
		num = num * -1;
	}
	if(num >= size)
		ft_hexadec(num / size, base);
	write(1,&base[num % size],1);
}


