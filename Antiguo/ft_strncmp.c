/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:48:38 by jesolano          #+#    #+#             */
/*   Updated: 2025/10/21 12:19:17 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ---------- ft_strncmp.c ---------- */
/* Compares up to n characters of s1 and s2 lexicographically. Returns difference of first differing characters or 0 if equal. */
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    if (n == 0)
        return 0;
    i = 0;
    while (i < n - 1 && s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}

/*
NAME

       strncmp — compare part of two strings

SYNOPSIS

       #include <string.h>

       int strncmp(const char *s1, const char *s2, size_t n);

DESCRIPTION

       The  functionality  described  on  this  reference  page is aligned with the ISO C standard. Any conflict
       between the requirements described  here  and  the  ISO C  standard  is  unintentional.  This  volume  of
       POSIX.1‐2017 defers to the ISO C standard.

       The  strncmp()  function  shall  compare not more than n bytes (bytes that follow a NUL character are not
       compared) from the array pointed to by s1 to the array pointed to by s2.

       The sign of a non-zero return value is determined by the sign of the difference between the values of the
       first pair of bytes (both interpreted as type unsigned char) that differ in the strings being compared.

RETURN VALUE

       Upon successful completion, strncmp() shall return an integer greater than, equal to, or less than 0,  if
       the  possibly null-terminated array pointed to by s1 is greater than, equal to, or less than the possibly
       null-terminated array pointed to by s2 respectively.


*/
