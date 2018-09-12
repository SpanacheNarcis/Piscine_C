/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 15:49:32 by nspanach          #+#    #+#             */
/*   Updated: 2018/08/05 20:30:37 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (s2[j] == '*')
		j++;
	while (s1[i] != s2[j])
		i++;
	while (s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[j])
	{
			i++;
			j++;
	}
	if (s1[i] == s2[j])
		return (1);
	else
		return (0);
}

	
int		main(void)
{
	char s1[]=".cmain";
	char s2[]=".c*";

	printf("%d", match(s1,s2));
	return(0);
}
