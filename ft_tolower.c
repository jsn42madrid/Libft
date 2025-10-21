/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:54:57 by jesolano          #+#    #+#             */
/*   Updated: 2025/10/21 12:22:53 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}



/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
OJO COMPARAR CON LA SIGUIENTE IMPLEMENTACIÖN PROPUESTA POR LA IA EN EL MULTIFICHERO
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


/* ---------- ft_tolower.c ---------- */
/* Converts an uppercase letter to lowercase. Returns unchanged if c is not uppercase. */
int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c - 'A') + 'a';
    return c;
}



/*
int    ft_tolower(int c)
{
    /* this checks if the character is an upper-case letter
     * with the decimal ASCII values (65 => A; 90 => Z)
     */
    if (c >= 65 && c <= 90)
        /* In the ASCII table, upper-case letters are indexed 32
         * less than lower-case letters, so to get the
         * corresponding lower-case letter, we add 32 to the
         * upper-case letter
         */
        return (c + 32);
    /* As said in the man, if the character is not an upper-case
     * letter, the argument is returned unchanged, that's why we 
     * return c directly
     */
    return (c);
}
*/









/*
NAME

       toupper, tolower, toupper_l, tolower_l - convert uppercase or lowercase

SYNOPSIS

       #include <ctype.h>

       int toupper(int c);
       int tolower(int c);

       int toupper_l(int c, locale_t locale);
       int tolower_l(int c, locale_t locale);

   Feature Test Macro Requirements for glibc (see feature_test_macros(7)):

       toupper_l(), tolower_l():
           Since glibc 2.10:
                  _XOPEN_SOURCE >= 700
           Before glibc 2.10:
                  _GNU_SOURCE

DESCRIPTION

       These functions convert lowercase letters to uppercase, and vice versa.

       If  c  is  a lowercase letter, toupper() returns its uppercase equivalent, if an uppercase representation
       exists in the current locale.  Otherwise, it returns c.  The toupper_l() function performs the same task,
       but uses the locale referred to by the locale handle locale.

       If c is an uppercase letter, tolower() returns its lowercase equivalent, if  a  lowercase  representation
       exists in the current locale.  Otherwise, it returns c.  The tolower_l() function performs the same task,
       but uses the locale referred to by the locale handle locale.

       If c is neither an unsigned char value nor EOF, the behavior of these functions is undefined.

       The  behavior  of  toupper_l()  and  tolower_l()  is  undefined  if  locale  is the special locale object
       LC_GLOBAL_LOCALE (see duplocale(3)) or is not a valid locale object handle.

RETURN VALUE

       The value returned is that of the converted letter, or c if the conversion was not possible.


*/