/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:14:34 by jemorais          #+#    #+#             */
/*   Updated: 2024/11/14 17:09:44 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*buffer;
	char	*read_buffer;
	char	*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!ft_strchar(read_buffer = read(fd, &buffer, BUFFER_SIZE), '/n'))
		line = read(fd, &buffer, BUFFER_SIZE);
	line = buffer;
	return (line);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char) c)
			return ((char *)s + i);
		i++;
	}
	if ((unsigned char) c == '\0')
		return ((char *)s + i);
	return (0);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*line;
	int		fd;
	// int		i = 1;

	if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	if (argc == 1)
		write(1, "File name missing.\n", 19);
	else
	{
		fd = open(argv[1], O_RDONLY);
		// if (fd == -1)
		// {
		// 	write(1	, "Open error.\n", 12);
		// 	return 1;
		// }
		// get_next_line(fd);
		while ((line = get_next_line(fd)) != NULL)
			{
				printf("%s", line);
				// free(line);
				// i++;
			}
		//printf("\n--%s--\n", get_next_line(fd));
		close(fd);
	}
	return (0);
}
