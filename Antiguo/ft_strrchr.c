/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:51:42 by jesolano          #+#    #+#             */
/*   Updated: 2025/10/21 12:21:13 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last;

	i = 0;
	last = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			last = (char *)(s + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(s + i));
	return (last);
}



/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
OJO COMPARAR CON LA SIGUIENTE IMPLEMENTACIÖN PROPUESTA POR LA IA EN EL MULTIFICHERO
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

/* ---------- ft_strrchr.c ---------- */
/* Returns pointer to last occurrence of character c in string s, or NULL if not found. */
char *ft_strrchr(const char *s, int c)
{
    const char *last;

    last = NULL;
    while (*s)
    {
        if (*s == (char)c)
            last = s;
        s++;
    }
    if ((char)c == '\0')
        return (char *)s;
    return (char *)last;
}



/*
NAME

       strchr, strrchr, strchrnul - locate character in string

SYNOPSIS

       #include <string.h>

       char *strchr(const char *s, int c);

       char *strrchr(const char *s, int c);

       #define _GNU_SOURCE         /* See feature_test_macros(7) */
       #include <string.h>

       char *strchrnul(const char *s, int c);

DESCRIPTION

       The strchr() function returns a pointer to the first occurrence of the character c in the string s.

       The strrchr() function returns a pointer to the last occurrence of the character c in the string s.

       The  strchrnul()  function is like strchr() except that if c is not found in s, then it returns a pointer
       to the null byte at the end of s, rather than NULL.

       Here "character" means "byte"; these functions do not work with wide or multibyte characters.

RETURN VALUE

       The strchr() and strrchr() functions return a pointer to the matched character or NULL if  the  character
       is  not  found.  The terminating null byte is considered part of the string, so that if c is specified as
       '\0', these functions return a pointer to the terminator.

       The strchrnul() function returns a pointer to the matched character, or a pointer to the null byte at the
       end of s (i.e., s+strlen(s)) if the character is not found.


*/

