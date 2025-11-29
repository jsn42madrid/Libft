/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zft_itoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:24:28 by jesolano          #+#    #+#             */
/*   Updated: 2025/11/28 16:43:06 by jesolano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Nombre de función:		ft_itoa
Prototipo:				char *ft_itoa(int n);
Archivos a entregar:	-
Parámetros:				n:   el entero a convertir.
Valor devuelto:			La string que represente el número.
						NULL si falla la reserva de memoria.
Funciones autorizadas:	malloc
Descripción:			Utilizando malloc(3), genera una string que
						represente el valor entero recibido como argumento.
						Los números negativos tienen que gestionarse.
*/