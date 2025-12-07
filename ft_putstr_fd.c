/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:41:28 by jesolano          #+#    #+#             */
/*   Updated: 2025/12/07 20:23:26 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_putstr_fd		write string to file descriptor

/*
Write a string to a file descriptor.
✔ Loop until '\0'
✔ No dynamic memory
*/

#include "libft.h"

void	ft_putstr_fd(const char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
Nombre de función		ft_putstr_fd

Prototipo				void ft_putstr_fd(char *s, int fd);

Archivos a entregar		-

Parámetros				s: La string a enviar.
						fd: El file descriptor sobre el que escribir.

Valor devuelto			Nada

Funciones autorizadas	write

Descripción				Envía la string ’s’ al file descriptor especificado.

*/
