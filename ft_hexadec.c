/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 15:48:13 by pablalva          #+#    #+#             */
/*   Updated: 2024/10/06 18:55:57 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

char *ft_hexadec(size_t nb)
{
	size_t temp;
	char *result;
	temp = nb;
	int len;
	len = 0;
  	if (nb == 0)
        len = 1; 
	else
	{
        len = 0; 
		while(temp > 0)
		{
			temp = temp / 16;
			len++;
		}
	}
	result=malloc((len + 1) * sizeof(char));
	if(result == NULL)
		return(NULL);
	result[len] = '\0';
	if(nb == 0)
	{
		result[0] = '0';
		return(result);
	}
	while(nb > 0)
	{
		temp = nb % 16;
		if(temp < 10)
			result[--len] = '0' + temp;
		else
			result[--len] = 'a' + (temp - 10);
		nb = nb / 16;
	}
	return(result);
}
