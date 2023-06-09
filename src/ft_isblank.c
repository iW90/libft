/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:03:21 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 15:09:57 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isblank(int c)
{
	return (c == ' ' || c == '\t');
}

/*
Checa se o caractere faz é espaço ou tab.
Retorna um inteiro positivo caso verdade, 0 caso falso.
*/