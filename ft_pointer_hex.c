/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:31:27 by pablalva          #+#    #+#             */
/*   Updated: 2024/10/07 18:05:17 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

void	*ft_pointer_hex(void *nb)
{
	char	*result;
	size_t	temp;
	char	*res_hexa;
	int j;
	int		i;

	i = 2;
	j = 0;
	temp = (size_t)nb;
	res_hexa = ft_hexadec(temp);
	result = malloc((ft_strlen(res_hexa) + 3) * sizeof(char));
	if (result == NULL)
	{
		free(res_hexa);
		return (NULL);
	}
	result[0] = '0';
	result[1] = 'x';
	while (res_hexa[j] != '\0')
		result[i++] = res_hexa[j++];
	result[i] = '\0';
	free(res_hexa);
}
