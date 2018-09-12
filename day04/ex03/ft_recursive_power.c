/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 12:09:07 by nspanach          #+#    #+#             */
/*   Updated: 2018/07/29 12:18:59 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power > 0)
		return (nb = nb * ft_recursive_power(nb, power - 1));
	else if (power == 0)
		return (nb = 1);
	else if (power < 0)
		return (nb = 0);
	else
		return (1);
}
