/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 01:03:57 by nspanach          #+#    #+#             */
/*   Updated: 2018/08/15 01:12:52 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 256;
	while (i >>= 1)
	{
		if (octet & i)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
}

int main (void)
{
	int n = 64;
	print_bits(n);
	return (0);
}
