/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 11:08:22 by nspanach          #+#    #+#             */
/*   Updated: 2018/07/29 11:31:45 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_vactorial(int nb)
{
	if (nb >= 1 && nb < 13)
		return (nb * ft_recursive_vactorial(nb - 1));
	else
		return (1);
}
