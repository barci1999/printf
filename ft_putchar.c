/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:44:18 by pablalva          #+#    #+#             */
/*   Updated: 2024/10/06 14:45:00 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (c);
}
int	main(void)
{
	char c = '%';
	ft_putchar(c);
	return (0);
}