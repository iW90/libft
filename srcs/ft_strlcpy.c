/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:10:56 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 18:38:24 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	if (!len)
		return (ft_strlen(src));
	i = -1;
	while (src[++i] && i < len - 1)
		dst[i] = src[i];
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*
Copia até `size - 1` bytes de `src` para `dst` adicionando um nulo no final.
Retorna o tamanho total da string que tentou criar.
*/