/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 10:56:15 by cfusaro           #+#    #+#             */
/*   Updated: 2017/09/20 18:37:51 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *src;

	i = 0;
	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	src = (int*)malloc(sizeof(int) * (max - min));
	if (src == NULL)
		return (0);
	while (max > min)
	{
		src[i] = min;
		min++;
		i++;
	}
	*range = src;
	return (i);
}
