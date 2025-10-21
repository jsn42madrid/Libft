/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:09:18 by jesolano          #+#    #+#             */
/*   Updated: 2025/10/21 12:13:11 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

* ---------- ft_memset.c ---------- */
/* Fills the first len bytes of memory area b with the constant byte c. */
void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *p = (unsigned char *)b;
    size_t i;

    i = 0;
    while (i < len)
    {
        p[i] = (unsigned char)c;
        i++;
    }
    return b;
}

/*
NAME

       memset - fill memory with a constant byte

SYNOPSIS

       #include <string.h>

       void *memset(void *s, int c, size_t n);

DESCRIPTION

       The  memset()  function fills the first n bytes of the memory area pointed to by s with the constant byte
       c.

RETURN VALUE

       The memset() function returns a pointer to the memory area s.


*/