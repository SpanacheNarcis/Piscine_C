/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 14:36:36 by nspanach          #+#    #+#             */
/*   Updated: 2018/08/13 14:51:48 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *s;
	int size;

	size = 0;
	while(src[size])
		size++;
	if (!(s = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	s[len] = '\0'; 
	while(size >= 0)
	{
		s[size] = src[size];
		size--;
	}
	return (s);
	}
