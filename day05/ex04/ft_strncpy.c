/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 10:57:40 by nspanach          #+#    #+#             */
/*   Updated: 2018/07/31 22:18:37 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		i;
	char	*aux;
	char	*aux1;

	i = 0;
	aux = src;
	aux1 = dest;
	while (i < n)
	{
		aux1[i] = aux[i];
		i++;
	}
	aux1[i + 1] = '\0';
	return (aux1);
}
