/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:10:28 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 15:34:26 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtok(char *str, const char *delimiters)
{
	static char	*ptr;

	if (!str)
	{
		str = ptr;
		if (!str)
			return (NULL);
	}
	str += ft_strspn(str, delimiters);
	if (!*str)
		return (ptr = 0);
	ptr = str + ft_strcspn(str, delimiters);
	if (*ptr)
		*ptr++ = 0;
	else
		ptr = 0;
	return (str);
}

/*
Divide uma string em tokens (ou "pedaços") com base em um conjunto de caracteres delimitadores.
Retorna um ponteiro para o próximo token encontrado na string.
	PS1.: necessário chamar várias vezes para ir passando para o próximo token).
	PS2.: altera a string original. Para não perder, sugerido fazer cópia.
*/