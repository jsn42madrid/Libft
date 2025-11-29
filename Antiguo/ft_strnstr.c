/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:50:09 by jesolano          #+#    #+#             */
/*   Updated: 2025/10/21 12:19:37 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ---------- ft_strnstr.c ---------- */
/* Searches for the first occurrence of needle in haystack within len bytes. Returns pointer to start of substring or NULL if not found. */
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    if (!*needle)
        return (char *)haystack;
    i = 0;
    while (haystack[i] != '\0' && i < len)
    {
        if (haystack[i] == needle[0])
        {
            j = 0;
            while (needle[j] != '\0' && i + j < len && haystack[i + j] == needle[j])
                j++;
            if (needle[j] == '\0')
                return (char *)(haystack + i);
        }
        i++;
    }
    return NULL;
}


/*
NAME

       strnstr — locate a substring in a string

LIBRARY

       Utility functions from BSD systems (libbsd, -lbsd)

SYNOPSIS

       #include <string.h>
       (See libbsd(7) for include usage.)

       char *
       strnstr(const char *big, const char *little, size_t len);

DESCRIPTION

       The  strnstr()  function  locates the first occurrence of the null-terminated string little in the string
       big, where not more than len characters are searched.  Characters that appear after a ‘\0’ character  are
       not  searched.   Since  the  strnstr()  function  is  a FreeBSD specific API, it should only be used when
       portability is not a concern.

RETURN VALUES

       If little is an empty string, big is returned; if  little  occurs  nowhere  in  big,  NULL  is  returned;
       otherwise a pointer to the first character of the first occurrence of little is returned.

EXAMPLES

       The  following  sets  the  pointer  ptr  to  NULL, because only the first 4 characters of largestring are
       searched:

             const char *largestring = "Foo Bar Baz";
             const char *smallstring = "Bar";
             char *ptr;

             ptr = strnstr(largestring, smallstring, 4);


*/