/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:10:37 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 18:37:55 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	size_t	i;

	if (!c)
		return ((char *)&src[ft_strlen(src)]);
	i = 0;
	while (src[i] && src[i] != (char)(c))
		i++;
	if (src[i] == (char)(c))
		return ((char *)&src[i]);
	return (0);
}

/*
Procura na string `s` pela primeira ocorrência do caractere `c`.
Retorna um ponteiro para o caractere localizado na string ou nulo caso não ache.
*/