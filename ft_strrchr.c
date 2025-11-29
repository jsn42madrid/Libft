/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:51:42 by jesolano          #+#    #+#             */
/*   Updated: 2025/11/25 22:01:02 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
OJO COMPARAR CON LA SIGUIENTE IMPLEMENTACIÓN 
PROPUESTA POR LA IA EN EL MULTIFICHERO
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

/* ---------- ft_strrchr.c ---------- */
/* Returns pointer to last occurrence of character c in string s
or NULL if not found. */
/*
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
}*/
