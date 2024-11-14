/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:14:34 by jemorais          #+#    #+#             */
/*   Updated: 2024/11/13 21:12:17 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*buffer;
	char	*line;
	//int		count;

	// count = 1; // estava no lugar de BUFFER_SIZE
	while (read(fd, &buffer, BUFFER_SIZE))
		write(1, &buffer, BUFFER_SIZE);
	line = buffer;
	return line;
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int		fd;

	if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	if (argc == 1)
		write(1, "File name missing.\n", 19);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			write(1, "Open error.\n", 12);
			return 1;
		}
		get_next_line(fd);
		printf("\n--%s--\n", get_next_line(fd));
		close(fd);
	}
	return (0);
}
