/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:52:14 by pablalva          #+#    #+#             */
/*   Updated: 2024/10/07 18:04:51 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include "printf.h"

void	ft_putstr(const char *s)
{
	write(1, s, ft_strlen(s));
	write(1, "\n", 1);
}
/*int main(void)
{
	const char *s = "cocacola";
	ft_putstr(s);
	return(0);
}*/