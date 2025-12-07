/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:08:52 by jesolano          #+#    #+#             */
/*   Updated: 2025/12/07 19:59:02 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// memchr		find byte in memory

/* Scans the first n bytes of memory area s for the byte c.
Returns pointer to the first occurrence or NULL if not found. */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p = (const unsigned char *)s;
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
