/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:09:18 by jesolano          #+#    #+#             */
/*   Updated: 2025/12/07 20:10:02 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_memset		fill memory with a constant byte

/* Fills the first len bytes of memory area b with the constant byte c. */

#include "libft.h"

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned char	*p;
	unsigned int	i;

	p = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*
NAME
       memset — set bytes in memory

SYNOPSIS
       #include <string.h>

       void *memset(void *s, int c, size_t n);

DESCRIPTION
       The functionality described on this reference page is aligned with  the
       ISO C  standard.  Any  conflict between the requirements described here
       and the ISO C standard is unintentional. This  volume  of  POSIX.1‐2017
       defers to the ISO C standard.

       The memset() function shall copy c (converted to an unsigned char) into
       each of the first n bytes of the object pointed to by s.

RETURN VALUE
       The memset() function shall return s; no return value  is  reserved  to
       indicate an error.

ERRORS
       No errors are defined.

*/
