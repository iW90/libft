/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:08:48 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 15:02:39 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*dst;
	size_t	sz;

	sz = num * size;
	if (!num || !size || sz / size != num)
		return (NULL);
	dst = malloc(sz);
	if (!dst)
		return (NULL);
	ft_bzero(dst, sz);
	return (dst);
}

/*
Aloca memória para `nitems` até `size` enchendo de 0.
Retorna um ponteiro se `nitems` e `size` são não-zero, retorna nulo caso `nitems` ou `size` for igual a 0.
*/