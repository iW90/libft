/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:10:56 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 15:10:33 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isupper(int c)
{
	return ((unsigned)c - 'A' < 26);
}

/*
Checa se o caractere é uma letra maiúscula.
Retorna um inteiro positivo caso verdade, 0 caso falso.
*/