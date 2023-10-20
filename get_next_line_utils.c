/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:28:50 by jose-gon          #+#    #+#             */
/*   Updated: 2023/10/20 12:23:09 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

int	ft_check_newline(char *stash)
{
	int	i;
printf("9\n");
printf("%s\n", stash);
	i = 0;
	if (stash == NULL)
		return (0);
	while (stash[i])
	{
		if (stash[i] == '\n' || stash[i] == '\0')
			return (1);
		i++;
	}
	return (0);
}

void	ft_join_to_stash(char *stash, char	*buff, int nread)
{
	int	i;
	int	j;
	printf("33\n");

	i = ft_strlen(stash);
	j = 0;
	stash = (char *)malloc(sizeof(char) * (i + nread + 1));
	while (j < nread)
	{
		stash[i + j] = buff[j];
		j++;
	}
	stash[i + j] = '\0';
	printf("%s <-- El stash post join\n", stash);
}
