/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 08:31:17 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 15:35:57 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_abs(int n)
{
	size_t	num;

	num = n;
	if (n < 0)
		return (-num);
	return (num);
}

/*
Retorna o número absoluto.
*/