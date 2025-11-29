/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:08:52 by jesolano          #+#    #+#             */
/*   Updated: 2025/11/25 21:56:36 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ---------- ft_memchr.c ---------- */
/* Scans the first n bytes of memory area s for the byte c.
Returns pointer to the first occurrence or NULL if not found. */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p = (const unsigned char *)s;
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)(p + i));
		i++;
	}
}
/*
NAME

    memchr — find byte in memory

SYNOPSIS

    #include <string.h>

    void *memchr(const void *s, int c, size_t n);

DESCRIPTION

    [CX] [Option Start] The functionality described on this reference page is 
	aligned with the ISO C standard. 	Any conflict between the requirements 
	described here and the ISO C standard is unintentional. 
	This volume of POSIX.1-2024 defers to the ISO C standard. [Option End]

    The memchr() function shall locate the first occurrence of c 
	(converted to an unsigned char) in the initial n bytes (each interpreted 
	as unsigned char) pointed to by s.

    The implementation shall behave as if it reads the bytes sequentially and 
	stops as soon as a matching byte is found.

    [CX] [Option Start] The memchr() function shall not change the setting of 
	errno on valid input. [Option End]

RETURN VALUE

    The memchr() function shall return a pointer to the located byte, or a null 
	pointer if the byte is not found.
*/
