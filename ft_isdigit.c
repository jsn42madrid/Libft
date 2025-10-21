/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:08:36 by jesolano          #+#    #+#             */
/*   Updated: 2025/10/16 21:48:09 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*#include <unistd.h>

int	ft_isdigit(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0')
			return (0);
		if (str[i] > '9')
			return (0);
		if (str[i] >= '0' && str[i] <= '9')
			return (0);
		i++;
	}
	return (1);
}*/


/*
NAME
       isdigit, isdigit_l — test for a decimal digit

SYNOPSIS
       #include <ctype.h>

       int isdigit(int c);
       int isdigit_l(int c, locale_t locale);

DESCRIPTION
       For isdigit(): The functionality described on this reference page is aligned with the ISO C standard. Any
       conflict  between the requirements described here and the ISO C standard is unintentional. This volume of
       POSIX.1‐2017 defers to the ISO C standard.

       The isdigit() and isdigit_l() functions shall test whether c is a character of class digit in the current
       locale, or in the locale represented  by  locale,  respectively;  see  the  Base  Definitions  volume  of
       POSIX.1‐2017, Chapter 7, Locale.

       The c argument is an int, the value of which the application shall ensure is a character representable as
       an  unsigned  char  or  equal  to  the  value  of the macro EOF. If the argument has any other value, the
       behavior is undefined.

       The behavior  is  undefined  if  the  locale  argument  to  isdigit_l()  is  the  special  locale  object
       LC_GLOBAL_LOCALE or is not a valid locale object handle.

RETURN VALUE
       The  isdigit()  and  isdigit_l() functions shall return non-zero if c is a decimal digit; otherwise, they
       shall return 0.


*/