/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:10:04 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 18:37:27 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (s > d)
		ft_memcpy(d, s, n);
	else
		while (n--)
			d[n] = s[n];
	return (dst);
}

/*
Copia `n` bytes de `src` para `dest`.
Retorna um ponteiro para `dest`.
*/