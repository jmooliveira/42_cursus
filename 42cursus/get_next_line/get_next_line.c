/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:14:34 by jemorais          #+#    #+#             */
/*   Updated: 2024/11/18 19:56:30 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>

char	*get_next_line(int fd)
{
	static char	*read_line;
	char		*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	if (read_line == NULL)
		read_line = ft_strdup("");
	read_line = ft_receive_buffer(fd, buffer, read_line);
	return (read_line);
}

char	*ft_receive_buffer(int fd, char *buffer, char *line)
{
	char	*temp;
	int		bytes_read;
	int		i;

	i = 0;
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		buffer[bytes_read] = '\0';
		if (!ft_strchr(buffer, '\n'))
		{
			temp = ft_strjoin(line, buffer);
			//free(line);
			line = temp;
		}
		else
			while (buffer[i] != '\n')
			{
				temp[i] = buffer[i];
				i++;
			}
		//free(line);
		line = temp;
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	return (line);
}

#include <stdio.h>

int	main(void)
{
	char	*line;
	int		fd;
	int		i;

	i = 1;
	fd = open("lifesdog.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("ERRO");
		return 1;
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("call %d is:%s", i, line);
		printf("\n");
		free(line);
		i++;
	}
	close(fd);
	return (0);
}
