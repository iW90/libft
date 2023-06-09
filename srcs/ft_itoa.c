/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:09:11 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 15:12:51 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	if (!(n / 10))
		return (1);
	return (1 + ft_intlen(n / 10));
}

static int	ft_isnegative(int n)
{
	if (n < 0)
		return (-1);
	return (0);
}

char	*ft_itoa(int n)
{
	size_t			num;
	int				sig;
	int				len;
	char			*str;

	sig = ft_isnegative(n);
	num = ft_abs(n);
	len = ft_intlen(num);
	if (sig)
		len++;
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (0);
	len--;
	if (!num)
		str[0] = '0';
	if (sig)
		str[0] = '-';
	while (num)
	{
		str[len--] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

/*
Transforma o número 'n' em uma string.
Retorna a string, ou nulo se a alocação falhar.
*/