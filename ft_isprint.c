/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:08:44 by jesolano          #+#    #+#             */
/*   Updated: 2025/10/21 12:09:15 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126) 
		return (1);
	else
		return (0);
}
/*
NAME
       isprint, isprint_l — test for a printable character

SYNOPSIS
       #include <ctype.h>

       int isprint(int c);
       int isprint_l(int c, locale_t locale);

DESCRIPTION
       For isprint(): The functionality described on this reference page is aligned with the ISO C standard. Any
       conflict  between the requirements described here and the ISO C standard is unintentional. This volume of
       POSIX.1‐2017 defers to the ISO C standard.

       The isprint() and isprint_l() functions shall test whether c is a character of class print in the current
       locale, or in the locale represented  by  locale,  respectively;  see  the  Base  Definitions  volume  of
       POSIX.1‐2017, Chapter 7, Locale.

       The c argument is an int, the value of which the application shall ensure is a character representable as
       an  unsigned  char  or  equal  to  the  value  of the macro EOF. If the argument has any other value, the
       behavior is undefined.

       The behavior  is  undefined  if  the  locale  argument  to  isprint_l()  is  the  special  locale  object
       LC_GLOBAL_LOCALE or is not a valid locale object handle.

RETURN VALUE
       The  isprint()  and isprint_l() functions shall return non-zero if c is a printable character; otherwise,
       they shall return 0.


*/