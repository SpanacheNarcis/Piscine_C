/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 10:38:38 by nspanach          #+#    #+#             */
/*   Updated: 2018/07/29 11:07:28 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		p;

	i = 1;
	p = 1;
	if (nb > 0 && nb < 13)
	{
		while (i <= nb)
		{
			p = p * i;
			++i;
		}
	}
	else
		p = 0;
	return (p);
}
