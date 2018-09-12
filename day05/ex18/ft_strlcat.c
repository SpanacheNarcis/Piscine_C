/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 00:55:56 by nspanach          #+#    #+#             */
/*   Updated: 2018/08/01 01:08:27 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat (char *dest, char *src, unsigned int size)
{
	int		i;
	unsigned int	dsize;

	i = 0;
	dsize = 0;
	while(dest[dsize])
		dsize ++;
	while(i <= (size - dsize - 1) && src[i])
	{
		dest[dsize]=src[i];
		dsize++;
		i++;
	}
	dest[dsize]= '\0';
	return (*dest);
}
