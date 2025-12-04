/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zft_putnbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:51:08 by jesolano          #+#    #+#             */
/*   Updated: 2025/12/04 12:48:20 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de función		ft_putnbr_fd

Prototipo				void ft_putnbr_fd(int n, int fd);

Archivos a entregar		-

Parámetros				n: El número que enviar.
						fd: El file descriptor sobre el que escribir.

Valor devuelto			Nada

Funciones autorizadas	write

Descripción				Envía el número ’n’ al file descriptor dado.

*/

/*
ft_putnbr_fd

Write an integer as characters to a file descriptor.
✔ Recursion or buffer
✔ Must handle negative numbers and INT_MIN
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
/*int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	return (0);
}*/	