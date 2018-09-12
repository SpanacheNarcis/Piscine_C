/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 13:29:13 by nspanach          #+#    #+#             */
/*   Updated: 2018/08/07 13:48:58 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *aux;
	int i;
	int size;

	i = 0;
	size = 0;
	while (tab[i])
	{
		size++;
		i++;
	}
	aux = (int *)malloc(size * sizeof(int));
	i = 0;
	while (i < length)
	{
		aux[i] = f(tab[i]);
		i++;
	}
	return (aux);
}
