/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 19:01:58 by nspanach          #+#    #+#             */
/*   Updated: 2018/07/31 22:17:05 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		i;
	char	*aux;
	char	*aux1;

	aux1 = dest;
	aux = src;
	i = 0;
	while (aux[i] != '\0')
	{
		aux1[i] = aux[i];
		i++;
	}
	aux1[i + 1] = '\0';
	return (aux1);
}
