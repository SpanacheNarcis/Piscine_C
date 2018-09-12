/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 00:13:51 by nspanach          #+#    #+#             */
/*   Updated: 2018/08/15 01:03:19 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		 	 if (*av[2] == '+')
			printf("%d", atoi(av[1]) + atoi(av[3]));
		else if (*av[2] == '-')
			printf("%d", atoi(av[1]) - atoi(av[3]));
		else if (*av[2] == '*')
			printf("%d", atoi(av[1]) * atoi(av[3]));
		else if (*av[2] == '/')
			printf("%d", atoi(av[1]) / atoi(av[3]));
		else if (*av[2] == '%')
			printf("%d", atoi(av[1]) % atoi(av[3]));
	}
	printf("\n");
	return (0);
}
