/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:33:27 by jesolano          #+#    #+#             */
/*   Updated: 2025/12/05 22:26:02 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Nombre de función		ft_substr

Prototipo				char  *ft_substr(char const *s, unsigned int start,
						size_t len);
					
Archivos a entregar		-
Parámetros				s: La string desde la que crear la substring.
						start: El índice del caracter en ’s’ desde el que
						empezar la substring.
						len: La longitud máxima de la substring
					
Valor devuelto			La substring reesultante					
						NULL si falla la reserva de memoria.
					
Funciones autorizadas	malloc

Descripción				Reserva (con malloc(3)) y devuelve una substring de
						la string ’s’.
						La substring empieza desde el índice ’start’ y
						tiene una longitud máxima ’len’.


*/

#include "libft.h"
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	size;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}

/*int	main(void)
{
	printf("%s\n", ft_substr("Buenos días", 1, 11));
	printf("%s\n", ft_substr("Buenos días", 1, 5));
	printf("%s\n", ft_substr("Buenos días", 8, 3));
}*/
