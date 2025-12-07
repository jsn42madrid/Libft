/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:56:15 by jesolano          #+#    #+#             */
/*   Updated: 2025/12/07 20:08:31 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_calloc		allocates memory for an array and initializes it to zero

/* Allocates memory for an array of nelem elements of elsize bytes each
and initializes all bytes to zero. Returns pointer to allocated memory
or NULL if allocation fails. */

/*The calloc() function shall allocate unused space for an array of nelem
elements each of whose size in bytes is elsize. The space shall be initialized
to all bits 0.*/

/* Esta instrucción sustituye lo que puedes encontrar en la página del manual:
Si nelem o elsize es 0, entonces calloc() devuelve un valor
de puntero único que más tarde puede pasarse con éxito a free().*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t elsize)
{
	void	*memory;

	memory = malloc(nmemb * elsize);
	if (!memory)
		return (NULL);
	ft_bzero(memory, (nmemb * elsize));
	return (memory);
}
