/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 11:35:53 by nspanach          #+#    #+#             */
/*   Updated: 2018/07/29 12:06:50 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		p;

	p = 1;
	if (power > 0)
	{
		while (power > 0)
		{
			p = p * nb;
			power--;
		}
	}
	else if (power == 0)
		p = 1;
	else if (power < 0)
		p = 0;
	return (p);
}
