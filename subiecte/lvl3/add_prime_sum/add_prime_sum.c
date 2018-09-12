/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 12:28:11 by nspanach          #+#    #+#             */
/*   Updated: 2018/08/15 13:20:22 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{

	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else ft_putchar(n + '0');
}

int		ft_atoi(char *s)
{
	int		nr;

	nr = 0;
	while (*s >= '0' && *s <= '9')
		nr = nr * 10 + *s++ - '0';
	return (nr);
}

int		is_prime(int n)
{
	int i;

	if (n == 1)
		return (0);
	if (n == 2)
		return (1);
	i = 2;
	while (i < n)
	{
		if (n % i != 0)
			return (1);
		return (0);
		i++;
	}
	return (0);
}

void	add_prime_sum(int n)
{
	int i;
	int sum;

	i = 1;
	sum = 0;
	while (i <= n)
	{
		if(is_prime(i))
			sum = sum + i;
		i++;
	}
	ft_putnbr(sum);
}

int		main(int ac, char **av)
{
	if (ac == 2 && ft_atoi(av[1]) > 0)
		add_prime_sum(ft_atoi(av[1]));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
