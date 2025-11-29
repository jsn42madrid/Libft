/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:08:58 by jesolano          #+#    #+#             */
/*   Updated: 2025/10/21 12:11:09 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ---------- ft_memcmp.c ---------- */
/* Compares the first n bytes of memory areas s1 and s2. Returns 0 if equal, else the difference between first differing bytes. */
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *p1 = (const unsigned char *)s1;
    const unsigned char *p2 = (const unsigned char *)s2;
    size_t i;

    i = 0;
    while (i < n)
    {
        if (p1[i] != p2[i])
            return (int)(p1[i] - p2[i]);
        i++;
    }
    return 0;
}

/*
NAME

       memcmp — compare bytes in memory

SYNOPSIS

       #include <string.h>

       int memcmp(const void *s1, const void *s2, size_t n);

DESCRIPTION

       The  functionality  described  on  this  reference  page is aligned with the ISO C standard. Any conflict
       between the requirements described  here  and  the  ISO C  standard  is  unintentional.  This  volume  of
       POSIX.1‐2017 defers to the ISO C standard.

       The  memcmp()  function shall compare the first n bytes (each interpreted as unsigned char) of the object
       pointed to by s1 to the first n bytes of the object pointed to by s2.

       The sign of a non-zero return value shall be determined by the sign of the difference between the  values
       of  the  first  pair  of  bytes (both interpreted as type unsigned char) that differ in the objects being
       compared.

RETURN VALUE

       The memcmp() function shall return an integer greater than, equal to, or  less  than  0,  if  the  object
       pointed to by s1 is greater than, equal to, or less than the object pointed to by s2, respectively.


*/