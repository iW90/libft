/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:09:00 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 15:09:54 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return ((unsigned)c < 128);
}

/*
Checa se o caractere faz parte da tabela ascii padrão.
Retorna um inteiro positivo caso verdade, 0 caso falso.
*/