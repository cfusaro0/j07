/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 16:25:23 by cfusaro           #+#    #+#             */
/*   Updated: 2017/09/20 18:39:57 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_print_words_tables(char **str);

char	**ft_put_words(char *str, char **tab)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0')
	{
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'
				&& str[i] != '\0')
		{
			tab[j][k++] = str[i++];
		}
		if (k != 0)
		{
			tab[j][k] = '\0';
			k = 0;
			j++;
			i--;
		}
		i++;
	}
	tab[j] = 0;
	return (tab);
}

int		ft_count_words(char *str, int i)
{
	int xspace;

	xspace = 1;
	while (str[i] != '\0')
	{
		if ((str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n') &&
				(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			xspace--;
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			xspace++;
		i++;
	}
	return (xspace);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		xspace;
	int		j;
	char	**tab;

	j = 0;
	i = 0;
	xspace = ft_count_words(str, i);
	tab = (char**)malloc(sizeof(*tab) * (xspace + 1));
	xspace = 0;
	while (str[i] != '\0')
	{
		while (str[i++] != ' ' && str[i++] != '\t' && str[i++] != '\n'
				&& str[i++] != '\0')
			xspace++;
		if (xspace != 0)
		{
			tab[j++] = (char*)malloc(sizeof(**tab) * (xspace + 1));
			xspace = 0;
			i--;
		}
		i++;
	}
	return (ft_put_words(str, tab));
}
