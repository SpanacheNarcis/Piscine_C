/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 15:35:26 by nspanach          #+#    #+#             */
/*   Updated: 2018/08/10 15:35:52 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree		*btree_create_node(void *item)
{
	t_btree *btree;

	btree = (t_btree *)malloc(sizeof(t_btree));
	if (btree)
	{
		btree->left = NULL;
		btree->right = NULL;
		btree->item = item;
	}
	return (btree);
}
