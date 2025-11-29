/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:08:52 by jesolano          #+#    #+#             */
/*   Updated: 2025/10/21 12:10:08 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ---------- ft_memchr.c ---------- */
/* Scans the first n bytes of memory area s for the byte c. Returns pointer to the first occurrence or NULL if not found. */
void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *p = (const unsigned char *)s;
    size_t i;

    i = 0;
    while (i < n)
    {
        if (p[i] == (unsigned char)c)
            return (void *)(p + i);
        i++;
    }
    return NULL;
}




/*
NAME

       memchr — find byte in memory

SYNOPSIS

       #include <string.h>

       void *memchr(const void *s, int c, size_t n);

DESCRIPTION

       The  functionality  described  on  this  reference  page is aligned with the ISO C standard. Any conflict
       between the requirements described  here  and  the  ISO C  standard  is  unintentional.  This  volume  of
       POSIX.1‐2017 defers to the ISO C standard.

       The  memchr()  function  shall  locate  the  first occurrence of c (converted to an unsigned char) in the
       initial n bytes (each interpreted as unsigned char) pointed to by s.

       Implementations shall behave as if they read the memory byte by byte from  the  beginning  of  the  bytes
       pointed to by s and stop at the first occurrence of c (if it is found in the initial n bytes).

RETURN VALUE

       The  memchr()  function  shall return a pointer to the located byte, or a null pointer if the byte is not
       found.


*/