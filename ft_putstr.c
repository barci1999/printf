/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:52:14 by pablalva          #+#    #+#             */
/*   Updated: 2024/10/08 17:14:27 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <unistd.h>

int	ft_putstr(const char *s)
{
	int count;
	count= write(1, s, ft_strlen(s));
	return(count);
}
/*int main(void)
{
	int result = 0;
	const char *s = "cocacola";
	ft_putstr(s);
	return(0);
}*/