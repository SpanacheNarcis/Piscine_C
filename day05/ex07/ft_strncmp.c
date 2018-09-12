/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 15:51:39 by nspanach          #+#    #+#             */
/*   Updated: 2018/07/31 22:37:22 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int		i;
	char	*aux;
	char	*aux1;

	aux = s1;
	aux1 = s2;
	i = 0;
	while (i < n && (aux[i] != '\0' || aux1[i] != '\0'))
	{
		if (aux[i] < aux1[i])
			return (-1);
		if (aux[i] > aux1[i])
			return (1);
		i++;
	}
	return (0);
}
