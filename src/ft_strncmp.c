/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:11:07 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 15:17:37 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *stra, const char *strb, size_t n)
{
	size_t			i;
	unsigned char	*cstra;
	unsigned char	*cstrb;

	if (!stra || !strb || !n)
		return (0);
	cstra = (unsigned char *)stra;
	cstrb = (unsigned char *)strb;
	i = -1;
	while (++i != n)
		if (cstra[i] != cstrb[i])
			return ((int)(cstra[i] - cstrb[i]));
	return (0);
}

/*
Compara `n` bytes de `s1` e `s2`.
Retorna a diferença entre `s1` e `s2`.
*/