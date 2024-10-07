/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 15:48:13 by pablalva          #+#    #+#             */
/*   Updated: 2024/10/07 10:16:24 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

static char	*assig_number(char *result, int len, size_t nb, size_t temp)
{
	if (nb == 0)
	{
		result[0] = '0';
		return (result);
	}
	while (nb > 0)
	{
		temp = nb % 16;
		if (temp < 10)
			result[--len] = '0' + temp;
		else
			result[--len] = 'a' + (temp - 10);
		nb = nb / 16;
	}
	return (result);
}

char	*ft_hexadec(size_t nb)
{
	size_t	temp;
	char	*result;
	int		len;

	temp = nb;
	len = 0;
	if (nb == 0)
		len = 1;
	else
	{
		len = 0;
		while (temp > 0)
		{
			temp = temp / 16;
			len++;
		}
	}
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	return (assig_number(result, len, nb, temp));
}
/*int main(void)
{
	size_t number;
	char *hex_result;

	// Prueba con varios números
	number = 0;
	hex_result = ft_hexadec(number);
	if (hex_result)
	{
		printf("Hexadecimal de %zu es: %s\n", number, hex_result);
		free(hex_result); // Liberar memoria
	}

	number = 255;
	hex_result = ft_hexadec(number);
	if (hex_result)
	{
		printf("Hexadecimal de %zu es: %s\n", number, hex_result);
		free(hex_result); // Liberar memoria
	}

	number = 4096;
	hex_result = ft_hexadec(number);
	if (hex_result)
	{
		printf("Hexadecimal de %zu es: %s\n", number, hex_result);
		free(hex_result); // Liberar memoria
	}

	number = 123456789;
	hex_result = ft_hexadec(number);
	if (hex_result)
	{
		printf("Hexadecimal de %zu es: %s\n", number, hex_result);
		free(hex_result); // Liberar memoria
	}

	return (0);
}*/
