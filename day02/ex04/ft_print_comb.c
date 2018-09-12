/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 21:27:40 by nspanach          #+#    #+#             */
/*   Updated: 2018/07/26 23:22:34 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = 47;
	while (i <= '9')
	{
		j = ++i;
		while (j <= '9')
		{
			k = ++j + 1;
			while (k <= '9')
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				if (i != 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
