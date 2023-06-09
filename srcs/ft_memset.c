/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:10:08 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 18:37:38 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *src, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)src;
	i = 0;
	while (n && i < n)
		str[i++] = (char)c;
	return (src);
}

/*
Copia o caractere `c` para os primeiros `n` caracteres em `*str`.
Retorna o ponteiro `str`.
*/