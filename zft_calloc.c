/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zft_calloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:56:15 by jesolano          #+#    #+#             */
/*   Updated: 2025/11/30 19:44:25 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ---------- ft_calloc.c ---------- */

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

/*

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void			*ptr;
	size_t			total;
	unsigned char	*p;
	size_t			i;

	total = nelem * elsize;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	p = (unsigned char)*ptr;
	i = 0;
	while (i < total)
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}



/*
NAME

malloc, free, calloc, realloc, reallocarray - allocate and free dynamic memory

SYNOPSIS

		#include <stdlib.h>

		void *malloc(size_t size);
		void free(void *ptr);
		void *calloc(size_t nmemb, size_t size);
		void *realloc(void *ptr, size_t size);
		void *reallocarray(void *ptr, size_t nmemb, size_t size);

   Feature Test Macro Requirements for glibc (see feature_test_macros(7)):

		reallocarray():
			Since glibc 2.29:
				_DEFAULT_SOURCE
			Glibc 2.28 and earlier:
				_GNU_SOURCE

DESCRIPTION

		The  malloc() function allocates size bytes and returns a pointer to the
		allocated memory.  The memory is not initialized.  If size is 0,
		then malloc() returns either NULL,
			or a unique  pointer  value  that  can
		later be successfully passed to free().

		The free() function frees the memory space pointed to by ptr, which must
		have been returned by a previous call to malloc(),
			calloc(),or realloc().
		Otherwise, or if free(ptr) has already been called before,
		undefined behavior occurs.  If ptr is NULL, no operation is performed.

		The calloc() function allocates memory for an array of nmemb elements
		of size bytes each  and  returns  a pointer  to  the  allocated  memory.
		The  memory  is set to zero.  If nmemb or size is 0, then calloc()
		returns either NULL, or a unique pointer value that can later be
		successfully passed to free(). If  the multiplication  of  nmemb  and
		size would result in integer overflow,
			then calloc() returns an error.  By
		contrast,
			an integer overflow would not be detected in the following call
		to malloc(),
				with  the  result that an incorrectly sized block of memory
		would be allocated:

			malloc(nmemb * size);

		The  realloc()  function  changes  the  size  of  the  memory block
		ointed to by ptr to size bytes.  The contents will be unchanged in
		the range from the start of the region up to the minimum of the old and
		new sizes.  If the new size is larger than the old size, the added
		memory will not be initialized.  If ptr is NULL, then the call is
		equivalent to malloc(size),for all values of size; if size is equal to
		zero,and ptr  is  not  NULL,  then  the  call  is  equivalent to
		free(ptr). Unless ptr is NULL, it must have been returned by an earlier
		call to malloc(), calloc(), or realloc().  If the area pointed  to  was
		moved, a free(ptr) is done.

		The reallocarray() function changes the size of the memory block pointed
		to by ptr to be large enough for an array of nmemb elements, each of
		which is size bytes. It is equivalent to the call

				realloc(ptr, nmemb * size);

		However,  unlike  that  realloc()  call, reallocarray() fails safely in
		the case where the multiplication would overflow.  If such an overflow
		occurs, reallocarray() returns  NULL,  sets  errno  to  ENOMEM,  and
		leaves the original block of memory unchanged.

RETURN VALUE

		The  malloc()  and calloc() functions return a pointer to the allocated
		memory, which is suitably aligned for any built-in type.  On error,
			these
		functions return NULL.  NULL may also be returned by a successful
		call to malloc() with a size of zero, or by a successful call to
		calloc() with nmemb  or  size  equal  to zero.

		The free() function returns no value.

		The realloc() function returns a pointer to the newly allocated memory,
		which is suitably aligned for any built-in  type,  or  NULL  if  the
		request  failed.   The returned pointer may be the same as ptr if the
		allocation was not moved (e.g., there was room to expand the allocation
		in-place), or different from  ptr if  the allocation was moved to a
		new address.  If size was equal to 0, either NULL or a pointer suitable
		to be passed to free() is returned.  If realloc() fails, the original
		block is left untouched; it is  not freed or moved.

		On  success, the reallocarray() function returns a pointer to the newly
		allocated memory.  On failure, it returns NULL and the original block of
		memory is left untouched.

ERRORS

		calloc(), malloc(), realloc(), and reallocarray() can fail with the
		following error:

		ENOMEM Out of memory.  Possibly, the application hit the RLIMIT_AS  or
		RLIMIT_DATA  limit  described  in
				getrlimit(2).


*/
