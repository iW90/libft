/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:10:34 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 15:10:07 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_islower(int c)
{
	return ((unsigned)c - 'a' < 26);
}

/*
Checa se o caractere é uma letra minúscula.
Retorna um inteiro positivo caso verdade, 0 caso falso.
*/