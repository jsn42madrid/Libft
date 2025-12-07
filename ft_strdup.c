/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:57:21 by jesolano          #+#    #+#             */
/*   Updated: 2025/12/07 20:34:09 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_strdup		duplicate string

/* 
Duplicates the given string by allocating memory and copying its contents.
Returns a pointer to the duplicated string or NULL if allocation fails.
*/

#include "libft.h"

//#include <stdio.h>

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(src) + 1;
	dest = malloc(len);
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, src, len);
	return (dest);
}

/*
int	main(void)
{
	printf("%s\n", ft_strdup("cadena de prueba"));
}
*/

/*
STRDUP(3POSIX)             POSIX Programmer's Manual            STRDUP(3POSIX)

PROLOG
       This  manual  page is part of the POSIX Programmer's Manual.  The Linux
       implementation of this interface may differ (consult the  corresponding
       Linux  manual page for details of Linux behavior), or the interface may
       not be implemented on Linux.

NAME
       strdup, strndup — duplicate a specific number of bytes from a string

SYNOPSIS
       #include <string.h>

       char *strdup(const char *s);
       char *strndup(const char *s, size_t size);

DESCRIPTION
       The strdup() function shall return a pointer to a new string, which  is
       a duplicate of the string pointed to by s.  The returned pointer can be
       passed to free().  A null pointer is returned if the new string  cannot
       be created.

       The  strndup()  function  shall be equivalent to the strdup() function,
       duplicating the provided s in a new block of memory allocated as if  by
       using  malloc(), with the exception being that strndup() copies at most
       size plus one bytes into the newly allocated  memory,  terminating  the
       new  string  with  a  NUL  character. If the length of s is larger than
       size, only size bytes shall be duplicated. If size is larger  than  the
       length of s, all bytes in s shall be copied into the new memory buffer,
       including the terminating NUL character. The newly created string shall
       always be properly terminated.

RETURN VALUE
       The  strdup()  function  shall return a pointer to a new string on suc‐
       cess. Otherwise, it shall return a null pointer and set errno to  indi‐
       cate the error.

       Upon  successful  completion,  the  strndup()  function  shall return a
       pointer to the newly allocated memory containing the duplicated string.
       Otherwise, it shall return a null pointer and set errno to indicate the
       error.

*/
