/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 20:44:18 by nspanach          #+#    #+#             */
/*   Updated: 2018/08/05 20:45:37 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE   1
# define FALSE   0
# define SUCCESS  0
# define EVEN_MSG  "I have a pair number of arguments.\n"
# define ODD_MSG  "I have an impair number of arguments.\n"
# define EVEN(x) (!(x % 2))

typedef int		t_bool;
#endif
