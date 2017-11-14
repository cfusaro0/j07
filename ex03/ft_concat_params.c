/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 13:53:16 by cfusaro           #+#    #+#             */
/*   Updated: 2017/09/19 19:08:27 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_start(int argc, char **argv)
{
	int a;
	int b;
	int c;

	a = 1;
	c = 0;
	while (a < argc)
	{
		b = 0;
		while (argv[a][b])
		{
			c++;
			b++;
		}
		a++;
	}
	if (argc > 2)
		c = c + (argc - 2);
	return (c);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		a;
	int		b;
	int		c;
	int		d;
	char	*str;

	d = ft_start(argc, argv);
	str = (char*)malloc(sizeof(*str) * (d + 1));
	a = 1;
	c = 0;
	while (a < argc)
	{
		b = 0;
		while (argv[a][b])
		{
			str[c++] = argv[a][b];
			b++;
		}
		if (a < argc - 1)
			str[c++] = '\n';
		a++;
	}
	str[c] = '\0';
	return (str);
}
