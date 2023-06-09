/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:10:52 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 18:38:12 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	dlen;

	dlen = ft_strlen(dst);
	if (len <= dlen)
		return (len + ft_strlen(src));
	i = -1;
	while (dlen + i != len - 1 && src[++i])
		dst[dlen + i] = src[i];
	dst[dlen + i] = 0;
	return (dlen + ft_strlen(src));
}

/*
Concatena no final de `dst` `size - 1` bytes de `src`.
Retorna o tamanho da string que tentou concatenar (dst + src).
*/