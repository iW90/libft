/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:09:03 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 15:10:00 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return ((unsigned)c - '0' < 10);
}

/*
Checa se o caractere é um número (0-9) ou não.
Retorna um inteiro positivo caso verdade, 0 caso falso.
*/