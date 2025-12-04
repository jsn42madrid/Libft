/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zft_itoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:24:28 by jesolano          #+#    #+#             */
/*   Updated: 2025/12/04 12:44:42 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*
ft_itoa

Convert an integer to a newly allocated string.
✔ Needs malloc and digit counting
✔ Must handle 0 and INT_MIN
*/

#include "libft.h"

//función auxiliar de loreto
static int	ft_digcount(int n)
{
	int	ndigs;

	if (n <= 0)
		ndigs = 1;
	else
		ndigs = 0;
	while (n != 0)
	{
		n /= 10;
		ndigs++;
	}
	return (ndigs);
}

//función principal de irodrigo

char	*ft_itoa(int n)
{
	char			*str;
	size_t			str_len;
	unsigned int	n_cpy;

	str_len = ft_digcount(n);
	n_cpy = n;
	str = ft_calloc(str_len + 1, 1);
	if (n < 0)
	{
		n_cpy = -n;
		str_len++;
	}
	if (!str)
		return (NULL);
	str[--str_len] = n_cpy % 10 + '0';
	n_cpy = n_cpy / 10;
	while (n_cpy)
		str[--str_len] = n_cpy % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
//linea original aquí: if (!(str = ft_calloc(str_len + 1, 1)))
// Tampoco le gusta if (!str ) ni str == '\0'
