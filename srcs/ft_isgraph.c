/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:31:55 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 15:10:03 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isgraph(int c)
{
	return ((unsigned)c - 33 < 94);
}

/*
Checa se o caractere é gráfico (visível, excluindo o espaço).
Retorna um inteiro positivo caso verdade, 0 caso falso.
*/