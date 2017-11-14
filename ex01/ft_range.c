/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 09:01:31 by cfusaro           #+#    #+#             */
/*   Updated: 2017/09/17 16:17:50 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *str;

	i = 0;
	if (min >= max)
		return (0);
	str = (int*)malloc(sizeof(*str) * (max - min));
	while (min < max)
	{
		str[i] = min;
		min++;
		i++;
	}
	return (str);
}
