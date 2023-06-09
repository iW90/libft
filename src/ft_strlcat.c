/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:10:52 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 15:17:02 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	ldst;
	size_t	lsrc;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	if (len <= ldst)
		return (len + lsrc);
	i = -1;
	while (ldst + i != len - 1 && src[++i])
		dst[ldst + i] = src[i];
	dst[ldst + i] = 0;
	return (ldst + lsrc);
}

/*
Concatena no final de `dst` `size - 1` bytes de `src`.
Retorna o tamanho da string que tentou concatenar (dst + src).
*/