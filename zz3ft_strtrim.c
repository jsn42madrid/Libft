/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz3ft_strtrim.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 20:11:14 by jesolano          #+#    #+#             */
/*   Updated: 2025/12/04 21:51:20 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de función		ft_strtrim

Prototipo				char *ft_strtrim(char const *s1, char const *set);

Archivos a entregar		-

Parámetros				s1: La string que debe ser recortada.
						set: Los caracteres a eliminar de la string.

Valor devuelto 			La string recortada.
						NULL si falla la reserva de memoria.

Funciones autoizadas	malloc

Descripción 			Elimina todos los caracteres de la string ’set’
						desde el principio y desde el final de ’s1’, hasta
						encontrar un caracter no perteneciente a ’set’. La
						string resultante se devuelve con una reserva de
						malloc(3
*/

#include "libft.h"

char	*ft_strtrim(const char *s, const char *set)
{
	char	*new_str;
	size_t	len;

	if (!s)
		return (NULL);
	while (*s && ft_strchr(set, *s))
		s++;
	len = ft_strlen(s);
	while (len && ft_strchr(set, s[len]))
		len--;
	new_str = ft_substr(s, 0, len + 1);
	return (new_str);
}

/* #include <stdio.h>
	char	*trimmed;

	trimmed = ft_strtrim(s1, set);
	printf("Original: '%s'\n", s1);
	printf("Set: '%s'\n", set);
	printf("Trimmed: '%s'\n", trimmed);
	free(trimmed);
	return (0);
} */