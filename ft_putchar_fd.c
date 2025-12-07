/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:18:17 by jesolano          #+#    #+#             */
/*   Updated: 2025/12/07 20:15:55 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_putchar_fd		write character to file descriptor

/*
Write a single character to a file descriptor.
✔ Only a write() call
✔ No loops, no malloc
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
Nombre de función		ft_putchar_fd

Prototipo				void ft_putchar_fd(char c, int fd);

Archivos a entregar		-

Parámetros				c: El carácter a enviar.
						fd: El file descriptor sobre el que escribir.

Valor devuelto			Nada

Funciones autorizadas	write

Descripción				Envía el carácter ’c’ al file descriptor
						especificado

*/