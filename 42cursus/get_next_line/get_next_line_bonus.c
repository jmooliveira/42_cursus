/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:14:34 by jemorais          #+#    #+#             */
/*   Updated: 2024/11/28 14:22:30 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	*read_line[1024];
	char		*buffer;
	char		*remainder;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (read_line[fd] == NULL)
		read_line[fd] = ft_strdup("");
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (free(read_line[fd]), read_line[fd] = NULL);
	read_line[fd] = ft_receive_buffer(fd, buffer, read_line[fd]);
	if (read_line[fd] == NULL)
		return (NULL);
	line = ft_line(read_line[fd]);
	remainder = ft_strdup(read_line[fd] + ft_strlen(line));
	free(read_line[fd]);
	read_line[fd] = remainder;
	return (line);
}

char	*ft_line(char *read_line)
{
	char	*line;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (read_line[i] != '\n' && read_line[i])
		i++;
	if (read_line[i] == '\n')
		i++;
	line = malloc(i + 1);
	while (j < i)
	{
		line[j] = read_line[j];
		j++;
	}
	line[j] = '\0';
	return (line);
}

char	*ft_receive_buffer(int fd, char *buffer, char *read_line)
{
	char	*temp;
	int		bytes_read;

	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0 || (!*read_line && bytes_read == 0))
			return (free(buffer), free(read_line), read_line = NULL);
		if (bytes_read == 0)
			break ;
		buffer[bytes_read] = '\0';
		temp = ft_strjoin(read_line, buffer);
		free(read_line);
		read_line = temp;
		if (ft_strchr(read_line, '\n') != NULL)
			break ;
	}
	free(buffer);
	return (read_line);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*line;
// 	int		fd;

// 	fd = open("lifesdog.txt", O_RDONLY);
// 	if (fd == -1)
// 	{
// 		perror("ERROR");
// 		return (1);
// 	}
// 	while ((line = get_next_line(fd)) != NULL)
// 	{
// 		printf("call is:%s", line);
// 		free(line);
// 	}
// 	close(fd);
// 	return (0);
// }

// cc -Wall -Wextra -Werror -D BUFFER_SIZE=42
// get_next_line_bonus.c get_next_line_utils_bonus.c get_next_line_bonus.h
