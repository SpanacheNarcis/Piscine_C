/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 20:52:42 by nspanach          #+#    #+#             */
/*   Updated: 2018/07/31 21:08:18 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	char *aux;

	aux = str;
	while (*aux != '\0')
	{
		if (!((*aux >= 'a' && *aux <= 'z') || (*aux >= 'A' && *aux <= 'Z')))
			return (0);
		aux++;
	}
	return (1);
}
