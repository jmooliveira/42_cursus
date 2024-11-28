/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:19:36 by jemorais          #+#    #+#             */
/*   Updated: 2024/11/28 19:53:04 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;

	i = 0;
	dup = (char *) malloc ((ft_strlen(s) + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
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

char	*ft_strjoin(char const *read_line, char const *buffer)
{
	char	*ptr;
	size_t	len_read_line;
	size_t	len_buffer;
	size_t	i;

	len_read_line = ft_strlen(read_line);
	len_buffer = ft_strlen(buffer);
	ptr = (char *)malloc(len_read_line + len_buffer + 1 * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len_read_line)
	{
		ptr[i] = read_line[i];
		i++;
	}
	ptr[i] = '\0';
	ft_strlcat(ptr, buffer, len_buffer + len_read_line + 1);
	return (ptr);
}

size_t	ft_strlcat(char *ptr, const char *buffer, size_t size)
{
	size_t	ptr_len;
	size_t	buffer_len;
	size_t	i;

	i = 0;
	ptr_len = ft_strlen(ptr);
	buffer_len = ft_strlen(buffer);
	if (size <= ptr_len)
		return (size + buffer_len);
	while (ptr_len + i + 1 < size && buffer[i])
	{
		ptr[ptr_len + i] = buffer[i];
		i++;
	}
	ptr[ptr_len + i] = '\0';
	return (ptr_len + buffer_len);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
