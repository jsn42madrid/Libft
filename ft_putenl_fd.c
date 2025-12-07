/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putenl_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:59:34 by jesolano          #+#    #+#             */
/*   Updated: 2025/12/07 20:18:09 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_putendl_fd		write string with newline to file descriptor

/*
Write a string followed by newline to a file descriptor.
✔ Same as ft_putstr_fd + one extra write()
✔ Extremely simple
*/

#include "libft.h"

void	ft_putendl_fd( char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

/*
Nombre de función		ft_putendl_fd

Prototipo				void ft_putendl_fd(char *s, int fd);

Archivos a entregar		-

Parámetros				s: La string a enviar.
						fd: El file descriptor sobre el que escribir.

Valor devuelto			Nada

Funciones autorizadas	write

Descripción				Envía la string ’s’ al file descriptor dado,
						seguido de un salto de línea

*/