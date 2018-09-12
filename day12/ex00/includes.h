/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspanach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 14:29:08 by nspanach          #+#    #+#             */
/*   Updated: 2018/08/09 14:31:14 by nspanach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_H
# define INCLUDES_H

# include <unistd.h>
# include <fcntl.h>
# define BUF_SIZE 4096

void	ft_display_file(char *filename);
int		is_input_valid(int argc);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_puterror(char *str);

#endif
