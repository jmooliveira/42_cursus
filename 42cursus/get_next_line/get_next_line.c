/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:14:34 by jemorais          #+#    #+#             */
/*   Updated: 2024/11/12 17:25:26 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	c = 48;
	int		buf = 6;

	// if (ptr == NULL)
		// return (NULL);
	while (read(buf, &c, 'r') != '\0')
	{
		write(1, &fd, buf);
		//ptr++;
	}
	return c;
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int		fd;
	char	*s;

	if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else if (argc == 1)
		write(1, "File name missing.\n", 19);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			return 1;
		get_next_line(fd);
	}
	close(fd);
	return (0);
}
