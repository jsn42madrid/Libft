/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:24:28 by jesolano          #+#    #+#             */
/*   Updated: 2025/12/07 20:44:43 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_itoa		converts integer to string

/*ft_itoa
Convert an integer to a newly allocated string.
✔ Needs malloc and digit counting
✔ Must handle 0 and INT_MIN*/

#include "libft.h"

// helper function to count digits

int	ft_digcount(int n)
{
	int	digits;

	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	digits = 0;
	while (n > 0)
	{
		n = n / 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	nb;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_digcount(n);
	if (n < 0)
	{
		nb = -n;
		len++;
	}
	else
		nb = n;
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (len--)
	{
		str[len] = nb % 10 + '0';
		nb /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

/*
Nombre de función:		ft_itoa
Prototipo:				char *ft_itoa(int n);
Archivos a entregar:	-
Parámetros:				n:   el entero a convertir.
Valor devuelto:			La string que represente el número.
						NULL si falla la reserva de memoria.
Funciones autorizadas:	malloc
Descripción:			Utilizan del isalpha es: %d\n ", isalpha(112));
						do malloc(3), genera una string que
						represente el valor entero recibido como argumento.
						Los números negativos tienen que gestionarse.
*/