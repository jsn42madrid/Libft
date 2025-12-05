/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 13:28:16 by jesolano          #+#    #+#             */
/*   Updated: 2025/12/05 21:48:08 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de función		ft_striteri

Prototipo				void ft_striteri(char *s, void (*f)(unsigned int, 
						char*));

Archivos a entregar		-

Parámetros				s: La string que iterar.
						f: La función a aplicar sobre cada carácter.

Valor devuelto			Nada

Funciones autorizadas	Ninguna

Descripción				A cada carácter de la string ’s’, aplica la función
						’f’ dando como parámetros el índice de cada
						carácter dentro de ’s’ y la dirección del propio
						carácter, que podrá modificarse si es necesario.

*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	c;

	c = 0;
	while (s[c] != '\0')
	{
		f(c, &s[c]);
		c++;
	}
}
