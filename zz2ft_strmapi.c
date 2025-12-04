/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz2ft_strmapi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 19:14:47 by jesolano          #+#    #+#             */
/*   Updated: 2025/12/04 19:15:31 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de función		ft_strmapi

Prototipo				char *ft_strmapi(char const *s, char (*f)(unsigned
						int, char));

Archivos a entregar		-

Parámetros				s: La string que iterar.
						f: La función a aplicar sobre cada carácter.

Valor devuelto			La string creada tras el correcto uso de ’f’ sobre
						cada carácter.
						NULL si falla la reserva de memoria.

Funciones autorizadas	malloc

Descripción				Aplica la función ’f’ a cada carácter de la cadena
						’s’, pasando su índice como primer argumento y el
						propio carácter como segundo argumento. Se crea una
						nueva cadena (utilizando malloc(3)) para recoger
						los resultados de las sucesivas aplicaciones de ’f’.

*/

#include "libft.h"
//#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*new_str;
	int		i;

	if (!s)
		return (ft_strdup(""));
	len = ft_strlen(s);
	new_str = malloc((len + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	i = 0;
	while (len > i)
	{
		new_str[i] = (*f)(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/*char	ft_test(unsigned int i, char s)
{
	s += i;
	return (s);
}

int	main()
{
	char	str[] = "Hola mundo";

	printf("%s\n", ft_strmapi(str, ft_test));
}*/