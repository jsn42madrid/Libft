/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:07:41 by jesolano          #+#    #+#             */
/*   Updated: 2025/10/21 12:04:13 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Sets the first n bytes of the memory area pointed to by s to zero. */
void ft_bzero(void *s, size_t n)
{
    unsigned char *p = (unsigned char *)s;
    size_t i;

    i = 0;
    while (i < n)
    {
        p[i] = 0;
        i++;
    }
}

/*
NAME

       bzero, explicit_bzero - zero a byte string

SYNOPSIS

       #include <strings.h>

       void bzero(void *s, size_t n);

       #include <string.h>

       void explicit_bzero(void *s, size_t n);

DESCRIPTION

       The  bzero() function erases the data in the n bytes of the memory starting at the location pointed to by
       s, by writing zeros (bytes containing '\0') to that area.

       The explicit_bzero() function performs the same task as bzero().  It differs  from  bzero()  in  that  it
       guarantees  that  compiler optimizations will not remove the erase operation if the compiler deduces that
       the operation is "unnecessary".

RETURN VALUE

       None.

VERSIONS

       explicit_bzero() first appeared in glibc 2.25.


*/
