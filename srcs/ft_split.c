/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:25:16 by inwagner          #+#    #+#             */
/*   Updated: 2023/06/09 15:15:34 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_substr_counter(char const *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i])
			count++;
		while (str[i] != c && str[i])
			i++;
	}
	return (count);
}

static int	ft_substr_len(char const *s, int start, char c)
{
	int	len;

	len = 0;
	while (s[start] != c && s[start++])
		len++;
	return (len);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	int		start;
	int		l_sstr;
	int		n_sstr;
	char	**pbox;

	if (!str)
		return (NULL);
	n_sstr = ft_substr_counter(str, c);
	pbox = (char **)ft_calloc((n_sstr + 1), sizeof(char *));
	if (!pbox)
		return (NULL);
	start = 0;
	i = 0;
	while (i < n_sstr)
	{
		while (str[start] && str[start] == c)
			start++;
		l_sstr = ft_substr_len(str, start, c);
		pbox[i] = ft_substr(str, start, l_sstr);
		start += l_sstr;
		i++;
	}
	return (pbox);
}

/*
Picota `s` em várias strings utilizando `c` como um delimitador, deve ter nulo em cada string.
Retorna as strings ou nulo se a alocação falhar.
*/