/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:48:38 by jesolano          #+#    #+#             */
/*   Updated: 2025/12/07 20:55:58 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_strncmp		compare strings up to n characters

/* Compares up to n characters of s1 and s2 lexicographically.
Returns difference of first differing characters or 0 if equal. */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
