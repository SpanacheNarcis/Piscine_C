/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 17:26:19 by nspanach          #+#    #+#             */
/*   Updated: 2018/08/08 18:12:43 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list *aux;

	aux = malloc(sizeof(t_list));
	if (aux)
	{
		aux->data = data;
		aux->next = NULL;
	}
	return (aux);
}
