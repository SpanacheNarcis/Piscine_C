/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 20:55:08 by nspanach          #+#    #+#             */
/*   Updated: 2018/08/02 21:31:13 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*range;
	int		i;
	int		j;

	if ((max - min) <= 0)
		range = NULL;
	else
		range = (int *)malloc((max - min) * sizeof(int));
	i = min;
	while (i < max)
	{
		range[i] = i;
		i++;
	}
	return (range);
}
