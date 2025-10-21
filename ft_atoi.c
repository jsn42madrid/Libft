/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:52:31 by jesolano          #+#    #+#             */
/*   Updated: 2025/10/21 12:51:20 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Converts a string to an integer. Ignores leading whitespace, 
handles optional '+' or '-', and stops at the first non-digit character. */

int	ft_atoi(const char *str)
{
	long	sign;
	long	result;		

	sign = 1;
	result = 0;

	if (!str)
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (int (result * sign));
	/*return (result * sign);*/
}







/*
NAME
       atoi — convert a string to an integer

SYNOPSIS
       #include <stdlib.h>

       int atoi(const char *str);

DESCRIPTION
       The  functionality  described  on  this  reference  page is aligned with the ISO C standard. Any conflict
       between the requirements described  here  and  the  ISO C  standard  is  unintentional.  This  volume  of
       POSIX.1‐2017 defers to the ISO C standard.

       The call atoi(str) shall be equivalent to:

           (int) strtol(str, (char **)NULL, 10)

       except  that  the  handling  of  errors  may  differ. If the value cannot be represented, the behavior is
       undefined.

RETURN VALUE
       The atoi() function shall return the converted value if the value can be represented.

ERRORS
       No errors are defined.


*/

