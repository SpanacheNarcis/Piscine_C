/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 16:52:06 by nspanach          #+#    #+#             */
/*   Updated: 2018/08/12 17:04:08 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	if (argc == 2)
		while (*argv[1])
		{
			j = 0;
			if ( *argv[1] >= 'a' && *argv[1] <= 'z')
				while (j < (*argv[1] - 'a' + 1))
				{
					write(1, argv[1], 1);
					j++;
				}
			else if (*argv[1] >= 'A' && *argv[1] <= 'Z')
				while (j < (*argv[1] - 'A' + 1))
				{
					write(1, argv[1], 1);
					j++;
				}
			else
				write(1, argv[1], 1);
			argv[1]++;
		}
	write(1, "\n", 1);
	return (0);
}
