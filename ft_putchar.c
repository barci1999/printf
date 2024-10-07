/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:44:18 by pablalva          #+#    #+#             */
/*   Updated: 2024/10/07 18:05:05 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include "printf.h"

void	ft_putchar(int c)
{
	write(1, &c, 1);
}
/*int	main(void)
{
	char c = '%';
	ft_putchar(c);
	return (0);
}*/