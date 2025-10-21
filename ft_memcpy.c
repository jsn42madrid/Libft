/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:09:05 by jesolano          #+#    #+#             */
/*   Updated: 2025/10/21 12:12:09 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ---------- ft_memcpy.c ---------- */
/* Copies n bytes from src to dst. Behavior is undefined if memory areas overlap. */
void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dst;
    const unsigned char *s = (const unsigned char *)src;
    size_t i;

    if (!dst && !src)
        return NULL;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return dst;
}

/*
NAME

       memcpy - copy memory area

SYNOPSIS

       #include <string.h>

       void *memcpy(void *dest, const void *src, size_t n);

DESCRIPTION

       The memcpy() function copies n bytes from memory area src to memory area dest.  The memory areas must not
       overlap.  Use memmove(3) if the memory areas do overlap.

RETURN VALUE

       The memcpy() function returns a pointer to dest.


*/