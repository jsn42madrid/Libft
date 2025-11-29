/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zft_calloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:56:15 by jesolano          #+#    #+#             */
/*   Updated: 2025/11/29 18:16:27 by jesolano         ###   ########.fr       */
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
/*   By: irodrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 13:12:58 by irodrigo          #+#    #+#             */
/*   Updated: 2020/02/21 11:49:32 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	mem = malloc(size * count);
	if (!mem)
		return (NULL);
	ft_bzero(mem, (size * count));
	return (mem);
}

*/










/*
CALLOC(3POSIX)                                      POSIX Programmer's Manual                                     CALLOC(3POSIX)

PROLOG
       This  manual  page is part of the POSIX Programmer's Manual.  The Linux implementation of this interface may differ (con‐
       sult the corresponding Linux manual page for details of Linux behavior), or the  interface  may  not  be  implemented  on
       Linux.

NAME
       calloc — a memory allocator

SYNOPSIS
       #include <stdlib.h>

       void *calloc(size_t nelem, size_t elsize);

DESCRIPTION
       The  functionality described on this reference page is aligned with the ISO C standard. Any conflict between the require‐
       ments described here and the ISO C standard is unintentional. This volume of POSIX.1‐2017 defers to the ISO C standard.

       The calloc() function shall allocate unused space for an array of nelem elements each of whose size in bytes  is  elsize.
       The space shall be initialized to all bits 0.

       The order and contiguity of storage allocated by successive calls to calloc() is unspecified. The pointer returned if the
       allocation succeeds shall be suitably aligned so that it may be assigned to a pointer to any type of object and then used
       to  access  such an object or an array of such objects in the space allocated (until the space is explicitly freed or re‐
       allocated). Each such allocation shall yield a pointer to an object disjoint from any other object. The pointer  returned
       shall  point  to the start (lowest byte address) of the allocated space. If the space cannot be allocated, a null pointer
       shall be returned. If the size of the space requested is 0, the behavior is implementation-defined: either a null pointer
       shall  be  returned,  or the behavior shall be as if the size were some non-zero value, except that the behavior is unde‐
       fined if the returned pointer is used to access an object.

RETURN VALUE
       Upon successful completion with both nelem and elsize non-zero, calloc() shall return a pointer to the  allocated  space.
       If either nelem or elsize is 0, then either:

        *  A null pointer shall be returned and errno may be set to an implementation-defined value, or

        *  A  pointer to the allocated space shall be returned. The application shall ensure that the pointer is not used to ac‐
           cess an object.

       Otherwise, it shall return a null pointer and set errno to indicate the error.

*/



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
		then malloc() returns either NULL, or a unique  pointer  value  that  can
		later be successfully passed to free().

	   The free() function frees the memory space pointed to by ptr, which must 
	   have been returned by a previous call to malloc(), calloc(),or realloc().
	   Otherwise, or if free(ptr) has already been called before,
	   undefined behavior occurs.  If ptr is NULL, no operation is performed.

	   The calloc() function allocates memory for an array of nmemb elements 
	   of size bytes each  and  returns  a pointer  to  the  allocated  memory.
	   The  memory  is set to zero.  If nmemb or size is 0, then calloc()
	   returns either NULL, or a unique pointer value that can later be 
	   successfully passed to free(). If  the multiplication  of  nmemb  and 
	   size would result in integer overflow, then calloc() returns an error.  By
	   contrast, an integer overflow would not be detected in the following call 
	   to malloc(),  with  the  result that an incorrectly sized block of memory 
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
	   memory, which is suitably aligned for any built-in type.  On error, these
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
