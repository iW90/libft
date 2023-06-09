/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:11:15 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 15:17:57 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	long int	i;

	if (!c)
		return ((char *)&src[(long int)ft_strlen(src)]);
	i = ft_strlen(src);
	while (i && src[i] != (char)(c))
		i--;
	if (src[i] == (char)(c))
		return ((char *)&src[i]);
	return (0);
}

/*
Procura na string `s` pela última ocorrência do caractere `c`.
Retorna um ponteiro para o caractere localizado na string ou nulo caso não ache.
*/