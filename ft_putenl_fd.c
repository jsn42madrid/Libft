/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putenl_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:59:34 by jesolano          #+#    #+#             */
/*   Updated: 2025/12/05 22:34:13 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*
ft_putendl_fd

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
PUTS(3)                    Linux Programmer's Manual                   PUTS(3)

NAME
       fputc, fputs, putc, putchar, puts - output of characters and strings

SYNOPSIS
       #include <stdio.h>

       int fputc(int c, FILE *stream);

       int fputs(const char *s, FILE *stream);

       int putc(int c, FILE *stream);

       int putchar(int c);

       int puts(const char *s);

DESCRIPTION
       fputc() writes the character c, cast to an unsigned char, to stream.

       fputs()  writes  the  string  s to stream, without its terminating null
       byte ('\0').

       putc() is equivalent to fputc() except that it may be implemented as  a
       macro which evaluates stream more than once.

       putchar(c) is equivalent to putc(c, stdout).

       puts() writes the string s and a trailing newline to stdout.

       Calls  to the functions described here can be mixed with each other and
       with calls to other output functions from the  stdio  library  for  the
       same output stream.

       For nonlocking counterparts, see unlocked_stdio(3).

RETURN VALUE
       fputc(),  putc(),  and putchar() return the character written as an un‐
       signed char cast to an int or EOF on error.

       puts() and fputs() return a nonnegative number on success,  or  EOF  on
       error.
*/
