/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:09:07 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 15:10:11 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return ((unsigned)c - ' ' < 95);
}

/*
Checa se o caractere é imprimível ou não.
Retorna um inteiro positivo caso verdade, 0 caso falso.
*/