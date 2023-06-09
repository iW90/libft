/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:09:49 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 15:13:04 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	chr;

	str = (unsigned char *)src;
	chr = (unsigned char)c;
	i = -1;
	while (++i < n)
		if (str[i] == chr)
			return ((void *)&str[i]);
	return (0);
}

/*
Procura pela primeira ocorrência de `c` em `s` até `n` bytes.
Retorna um ponteiro na posição em q c foi achado, ou um nulo caso não ache.
*/