/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:32:01 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 15:11:15 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isxdigit(int c)
{
	return (ft_isdigit(c) || \
	((unsigned)c - 'a' < 6) || ((unsigned)c - 'A' < 6));
}

/*
Checa se o caractere é um número hexadecimal (0-9; A-F; a-f) ou não.
Retorna um inteiro positivo caso verdade, 0 caso falso.
*/