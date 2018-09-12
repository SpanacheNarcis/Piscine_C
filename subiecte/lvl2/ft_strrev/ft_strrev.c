/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 01:32:08 by nspanach          #+#    #+#             */
/*   Updated: 2018/08/15 01:35:24 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int len = 0;
	int i = 0;
	char *aux;

	aux = str;

	while (aux[len])
		len++;
	len--;
	while (len > 0)
	{
		str[i] = aux[len];
		i++;
		len--;
	}
	str[i] = '\0';
	return (str);
}
