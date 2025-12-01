/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magreo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 18:09:43 by jesolano          #+#    #+#             */
/*   Updated: 2025/12/01 18:09:48 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digcount(int n)
{
	int	size;

	if (n <= 0)
		size = 1;
	else
		size = 0;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}



static size_t	ft_digit_count(int n)
{
	size_t		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			ndigs;
	unsigned int	n_cpy;

	ndigs = ft_digit_count(n);
	n_cpy = n;
	if (n < 0)
	{
		n_cpy = -n;
		ndigs++;
	}
	if (!(str = ft_calloc(ndigs + 1, 1)))
		return (NULL);
	str[--ndigs] = n_cpy % 10 + '0';
	while (n_cpy /= 10)
		str[--ndigs] = n_cpy % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}


