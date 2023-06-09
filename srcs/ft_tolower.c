/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:11:25 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 18:46:09 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (ft_isalpha(c))
		return (c + 32);
	return (c);
}

/*
Converte a letra `c` para minúscula se possível.
Retorna o valor da letra convertida ou `c` caso não tenha convertido.
*/