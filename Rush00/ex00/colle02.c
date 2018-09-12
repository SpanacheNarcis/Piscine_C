/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 15:21:35 by nspanach          #+#    #+#             */
/*   Updated: 2018/07/29 15:25:16 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int  ft_putchar(char c);

void colle(int x, int y)
{
	int  i;
	int  j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((j == 1 && i == 1) || (i == 1 && j == x))
				ft_putchar('A');
			else if ((i == y && j == x) || (i == y && j == 1))
				ft_putchar('C');
			else if ((i == 1 || i == y) && (j != 1 || j != x))
				ft_putchar('B');
			else if ((i != 1 || i != y) && (j == 1 || j == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		if (i < y)
			ft_putchar('\n');
		i++;
	}
}
