/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:09:11 by jesolano          #+#    #+#             */
/*   Updated: 2025/10/21 12:12:53 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ---------- ft_memmove.c ---------- */
/* Copies len bytes from src to dst, safely handling overlapping memory areas. */
void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d = (unsigned char *)dst;
    const unsigned char *s = (const unsigned char *)src;
    size_t i;

    if (!dst && !src)
        return NULL;
    if (d < s)
    {
        i = 0;
        while (i < len)
        {
            d[i] = s[i];
            i++;
        }
    }
    else if (d > s)
    {
        i = len;
        while (i > 0)
        {
            i--;
            d[i] = s[i];
        }
    }
    return dst;
}

/*
NAME

       memmove - copy memory area

SYNOPSIS

       #include <string.h>

       void *memmove(void *dest, const void *src, size_t n);

DESCRIPTION

       The  memmove()  function  copies  n bytes from memory area src to memory area dest.  The memory areas may
       overlap: copying takes place as though the bytes in src are first copied into a temporary array that does
       not overlap src or dest, and the bytes are then copied from the temporary array to dest.

RETURN VALUE

       The memmove() function returns a pointer to dest.


*/
