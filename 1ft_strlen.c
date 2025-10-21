/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1ft_strlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:04:56 by jesolano          #+#    #+#             */
/*   Updated: 2025/10/17 20:05:40 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int	ft_strlen(char *str)

{
	int	lenght;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		lenght++;
	}
	int a = lenght + 48;
	write(1, &a ,1);
	return(lenght);
}

int	main(void)
{
	char	n[] = "asssdf";
	ft_strlen(n);
}
/*
NAME
       strlen - calculate the length of a string

SYNOPSIS
       #include <string.h>

       size_t strlen(const char *s);

DESCRIPTION
       The strlen() function calculates the length of the string pointed to by s, excluding the terminating null
       byte ('\0').

RETURN VALUE
       The strlen() function returns the number of bytes in the string pointed to by s.



*/




#include <unistd.h>

int	ft_strlen(char *str)

{
	int	lenght;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		lenght++;
	}
	int a = lenght + 48;
	write(1, &a ,1);
	return(lenght);
}

int	main(void)
{
	char	n[] = "asssdf";
	ft_strlen(n);
}
