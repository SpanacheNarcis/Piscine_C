/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 16:19:28 by nspanach          #+#    #+#             */
/*   Updated: 2018/07/29 19:25:07 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		i;
	int		w;

	if (nb == 2)
		return (1);
	if (nb == 3)
		return (1);
	if (nb % 2 == 0)
		return (0);
	if (nb % 3 == 0)
		return (0);
	i = 5;
	w = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += w;
		w = 6 - w;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int		i;

	i = 2;
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		++nb;
	}
}
