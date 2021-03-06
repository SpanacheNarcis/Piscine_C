/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 15:54:43 by nspanach          #+#    #+#             */
/*   Updated: 2018/08/02 16:15:08 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			if (*str > 'k')
				*str = *str - 10;
			else
				*str = *str + 16;
		}
		if (*str >= 'A' && *str <= 'Z')
		{
			if (*str > 'K')
				*str = *str - 10;
			else
				*str = *str + 16;
		}
		str++;
	}
	return (str);
}
