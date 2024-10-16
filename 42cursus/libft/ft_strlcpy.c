/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:49:09 by jemorais          #+#    #+#             */
/*   Updated: 2024/10/14 17:50:48 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	else
	{
		while (src[i] && (i < size - 1))
		{
			dst[i] = src[i];
			i++;
		}
	}
	if (size > 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}

// int main(void)
// {
// 	const char	source[11] = "lorem ipsum";
// 	char		dest[20];
// 	size_t		buf;

// 	buf = 3;
// 	printf("%zu\n", ft_strlcpy(dest, source, buf));
// 	//printf("%d\n", strlcpy(dest, source, buf));
// 	return (0);
// }
