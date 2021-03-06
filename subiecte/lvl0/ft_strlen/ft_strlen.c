/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 16:06:16 by nspanach          #+#    #+#             */
/*   Updated: 2018/08/12 16:07:21 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int nr;

	nr = 0;
	while(*str)
	{
		nr++;
		str++;
	}
	return(nr);
}
