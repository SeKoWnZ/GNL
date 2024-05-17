/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:37:02 by jose-gon          #+#    #+#             */
/*   Updated: 2023/11/02 17:12:02 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	int		fd1;
	int		fd2;
	int		fd3;

	fd = open("giant_line_nl.txt", O_RDONLY);
	fd1 = open("test1.txt", O_RDONLY);
	fd2 = open("test2.txt", O_RDONLY);
	fd3 = open("test3.txt", O_RDONLY);

	printf("%s\n", get_next_line(fd3));
	printf("%s\n", get_next_line(fd1));
	printf("%s\n", get_next_line(fd2));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd3));
	printf("%s\n", get_next_line(fd2));
	printf("%s\n", get_next_line(fd1));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd1));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd3));

	close(fd);
	close(fd1);
	close(fd2);
	close(fd3);
}
