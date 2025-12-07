/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:08:28 by jesolano          #+#    #+#             */
/*   Updated: 2025/12/07 19:55:01 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// isascii		checks if character is a valid ASCII char

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
