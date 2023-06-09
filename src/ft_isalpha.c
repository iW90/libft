/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:08:56 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 15:09:50 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((unsigned)c - 'A' < 26 || (unsigned)c - 'a' < 26);
}

/*
Checa se o caractere é uma letra do alfabeto (a-z, A-Z).
Retorna um inteiro positivo caso verdade, 0 caso falso.
*/