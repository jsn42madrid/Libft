/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:47:16 by jesolano          #+#    #+#             */
/*   Updated: 2025/11/25 22:00:04 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Copies up to dstsize - 1 characters from src to dst and null-terminates dst. 
Returns total length of src. */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	i;

	srclen = 0;
	while (src[srclen] != '\0')
		srclen++;
	if (dstsize == 0)
		return (srclen);
	i = 0;
	while (i + 1 < dstsize && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}
/*
STRLCPY(3)                 Library Functions Manual                 STRLCPY(3)

NAME
     strlcpy — size-bounded string copy

SYNOPSIS
     #include <string.h>

     size_t
     strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);

DESCRIPTION
     The strlcpy() function copies up to dstsize - 1 characters from src to
     dst, NUL-terminating the result if dstsize is not 0. It is designed to
     be a safer, more consistent, and less error-prone replacement for
     strncpy(3). Unlike strncpy(3), strlcpy() takes the full size of the
     destination buffer and guarantees NUL-termination when there is room.

     The src and dst pointers must reference valid C strings and buffers.
     Room for the terminating NUL byte should be included in dstsize.
     strlcpy() does not write beyond dstsize bytes.

RETURN VALUES
     strlcpy() returns the total length of src. This value allows the caller
     to detect truncation by comparing the return value against dstsize. If
     the return value is greater than or equal to dstsize, truncation
     occurred.

EXAMPLES
     Copy into a fixed-size buffer, checking for truncation:

           char buf[32];
           size_t n = strlcpy(buf, input, sizeof(buf));
           if (n >= sizeof(buf)) {
               #* handle truncation *#
			   BerkeleySD November 2025 BerkeleySD			   
*/