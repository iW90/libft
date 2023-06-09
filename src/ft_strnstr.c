/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:11:11 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 15:17:48 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	littlen;

	if (!*little)
		return ((char *)big);
	littlen = ft_strlen(little);
	while (*big && littlen <= n--)
	{
		if (!ft_strncmp(big, little, littlen))
			return ((char *)big);
		big++;
	}
	return (0);
}

/*
Procura a primeira ocorrência da string `little` na string `big` até `len` bytes.
Retorna `big` se `little` for uma string vazia, retorna nulo se não achar `little` dentro de `big`, retorna a posição de `big` onde `little` se inicia.
*/