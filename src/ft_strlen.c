/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:10:59 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 15:17:18 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *src)
{
	size_t	len;

	len = 0;
	while (src[len])
		len++;
	return (len);
}

/*
Conta os caracteres em uma string ignorando o nulo no final.
Retorna o número de bytes na string.
*/