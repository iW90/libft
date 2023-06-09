/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:08:23 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 15:02:14 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	n;
	int	neg;

	n = 0;
	neg = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		neg = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str))
		n = 10 * n - (*str++ - '0');
	if (neg)
		return (n);
	return (-n);
}

/*
Converte a primeira sequência numérica de `nptr` para seu valor em `int`.
Retorna o valor convertido.
*/