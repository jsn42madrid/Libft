/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:08:28 by jesolano          #+#    #+#             */
/*   Updated: 2025/10/17 20:02:35 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127) 
		return (1);
	else
		return (0);
}


/*
NAME
       isascii — test for a 7-bit US-ASCII character

SYNOPSIS
       #include <ctype.h>

       int isascii(int c);

DESCRIPTION
       The isascii() function shall test whether c is a 7-bit US-ASCII character code.

       The isascii() function is defined on all integer values.

RETURN VALUE
       The  isascii() function shall return non-zero if c is a 7-bit US-ASCII character code between 0 and octal
       0177 inclusive; otherwise, it shall return 0.
*/