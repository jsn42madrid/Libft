/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:52:31 by jesolano          #+#    #+#             */
/*   Updated: 2025/12/07 20:43:07 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// atoi		converts string to integer

/* 
Converts a string to an integer. Ignores leading whitespace,
handles optional '+' or '-', and stops at the first non-digit character.

NAME

	atoi — convert a string to an integer

SYNOPSIS

	#include <stdlib.h>

	int atoi(const char *str);
	*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	res;
	long	sign;

	res = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (res > (9223372036854775807 - (*str - '0')) / 10)
		{
			if (sign == 1)
				return (-1);
			return (0);
		}
		res = res * 10 + (*str - '0');
		str++;
	}
	return ((int)(res * sign));
}
