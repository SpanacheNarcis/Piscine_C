/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 11:29:02 by nspanach          #+#    #+#             */
/*   Updated: 2018/07/31 22:20:06 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*aux;

	aux = NULL;
	i = 0;
	j = 0;
	while (str[i] != '\0' && to_find[j] != '\0')
	{
		if (str[i] == to_find[0])
		{
			aux = &str[i];
		}
		if (str[i] == to_find[j])
		{
			++j;
			++i;
		}
		else
			j = 0;
		++i;
	}
}
