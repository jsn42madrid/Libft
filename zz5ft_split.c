/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz5ft_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 21:45:05 by jesolano          #+#    #+#             */
/*   Updated: 2025/12/04 21:52:01 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Nombre de función		ft_split

Prototipo				char **ft_split(char const *s, char c);

Archivos a entregar		-

Parámetros				s: La string a separar.
						c: El carácter delimitador.

Valor devuelto			El array de nuevas strings resultante de la
						separación.
						NULL si falla la reserva de memoria.

Funciones autorizadas	malloc, free

Descripción				Reserva (utilizando malloc(3)) un array de strings
						resultante de separar la string ’s’ en substrings
						utilizando el caracter ’c’ como delimitador. El
						array debe terminar con un puntero NULL.

*/