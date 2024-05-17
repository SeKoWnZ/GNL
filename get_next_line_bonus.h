/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:28:45 by jose-gon          #+#    #+#             */
/*   Updated: 2023/11/06 16:15:58 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
int		ft_strlen(char *str);
int		ft_check_newline(char *stash);
void	ft_join_to_stash(char **stash, char	*buff, int nread);
void	ft_clean_the_corpse(char **stash, int i);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

#endif