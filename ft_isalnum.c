/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:07:57 by jesolano          #+#    #+#             */
/*   Updated: 2025/10/16 22:47:57 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
/*
NAME
       isalnum, isalnum_l — test for an alphanumeric character

SYNOPSIS
       #include <ctype.h>

       int isalnum(int c);
       int isalnum_l(int c, locale_t locale);

DESCRIPTION
       For isalnum(): The functionality described on this reference page is aligned with the ISO C standard. Any
       conflict  between the requirements described here and the ISO C standard is unintentional. This volume of
       POSIX.1‐2017 defers to the ISO C standard.

       The isalnum() and isalnum_l() functions shall test whether c is a character of class alpha  or  digit  in
       the current locale, or in the locale represented by locale, respectively; see the Base Definitions volume
       of POSIX.1‐2017, Chapter 7, Locale.

       The c argument is an int, the value of which the application shall ensure is representable as an unsigned
       char  or  equal  to  the  value  of  the  macro EOF. If the argument has any other value, the behavior is
       undefined.

       The behavior  is  undefined  if  the  locale  argument  to  isalnum_l()  is  the  special  locale  object
       LC_GLOBAL_LOCALE or is not a valid locale object handle.

RETURN VALUE
       The  isalnum()  and  isalnum_l()  functions  shall  return  non-zero  if  c is an alphanumeric character;
       otherwise, they shall return 0.
*/