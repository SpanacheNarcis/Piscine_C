/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 14:20:44 by nspanach          #+#    #+#             */
/*   Updated: 2018/08/13 14:34:57 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(const char *str)
{
	int sign;
	int nr;

	nr = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
			str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nr = nr * 10 + *str - '0';
		str++;
	}
	return (sign * nr);
}

int		main(void)
{
	char a[] = "   -5234";
	printf("%d\n", ft_atoi(a));
	return (0);
}
