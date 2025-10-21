/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:08:17 by jesolano          #+#    #+#             */
/*   Updated: 2025/10/16 21:12:37 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/*
#include <unistd.h>

int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A')
			return (0);1
		if (str[i] > 'z')
			return (0);
		if (str[i] > 'Z' && str[i] < 'a')
			return (0);
		i++;
	}
	return (1);
}












/*
NAME
       isalpha, isalpha_l — test for an alphabetic character

SYNOPSIS
       #include <ctype.h>

       int isalpha(int c);
       int isalpha_l(int c, locale_t locale);

DESCRIPTION
       For isalpha(): The functionality described on this reference page is 
       aligned with the ISO C standard. Any conflict  between the requirements 
       described here and the ISO C standard is unintentional. This volume of
       POSIX.1‐2017 defers to the ISO C standard.

       The isalpha() and isalpha_l() functions shall test whether c is a 
       character of class alpha in the current locale, or in the locale
       represented by  locale, respectively;  see  the  Base  
       Definitions  volume of POSIX.1‐2017, Chapter 7, Locale.

       The c argument is an int, the value of which the application 
       shall ensure is representable as an unsigned
       char or  equal  to  the  value  of  the  macro EOF. If the
        argument has any other value, the behavior is undefined.

       The behavior  is  undefined  if  the  locale  argument  to 
        isalpha_l()  is  the  special  locale  object
       LC_GLOBAL_LOCALE or is not a valid locale object handle.
       

RETURN VALUE
       The isalpha() and isalpha_l() functions shall return non-zero
       if c is an alphabetic character; otherwise,
       they shall return 0.
*/