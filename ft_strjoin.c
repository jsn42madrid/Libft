/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 21:16:55 by jesolano          #+#    #+#             */
/*   Updated: 2025/12/05 22:27:06 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de función		ft_strjoin

Prototipo				char *ft_strjoin(char const *s1, char const *s2);

Archivos a entregar		-

Parámetros				s1: La primera string.
						s2: La string a añadir a ’s1’.

Valor devuelto			La nueva string.
						NULL si falla la reserva de memoria.

Funciones autorizadas	malloc

Descripción				Reserva (con malloc(3)) y devuelve una nueva
						string, formada por la concatenación de ’s1’ y ’s2’.

*/

#include "libft.h"
//#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	printf("%s\n", ft_strjoin("Mas vale prevenir", "que curar"));
}*/