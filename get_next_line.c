/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:45:11 by jose-gon          #+#    #+#             */
/*   Updated: 2023/10/20 13:08:35 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	leaks(void)
{
	system("leaks -q a.out");
}

static void	ft_read_and_stash(int fd, char **stash, int *nread)
{
	char	*buff;

	buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return ;
	while (!ft_check_newline(*stash) || *nread != 0)
	{
		printf("%d\n", fd);
		*nread = read(fd, buff, BUFFER_SIZE);
		printf("%s\n", buff);
		buff[*nread] = '\0';
		printf("%s <-- El buff pre join\n", buff);
		ft_join_to_stash(*stash, buff, *nread);
		break;
	}
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;
	int			nread;

	atexit(leaks);
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &line, 0) < 0)
		return (NULL);
	line = NULL;
	nread = 1;
	// 1 read and stash
	ft_read_and_stash(fd, &stash, &nread);
	// 2 move to line
	// 3 clear stash
	printf("%s <-- Stash pre return \n", stash);
	return (stash);
}
