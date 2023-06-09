/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:31:58 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 15:09:36 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ispunct(int c)
{
	return (ft_isgraph(c) && !ft_isalnum(c));
}

/*
Checa se o caractere é pontuação ou não.
Retorna um inteiro positivo caso verdade, 0 caso falso.
*/