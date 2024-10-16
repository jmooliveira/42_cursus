/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:50:11 by jemorais          #+#    #+#             */
/*   Updated: 2024/10/16 18:32:20 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// #include <stddef.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			return ((char *)s + i);
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (0);
}

// int	main(void)
// {
// 	const char	c[30] = "Jefferson";
// 	char		x;

// 	x = '\0';
// 	printf ("%s\n", ft_strchr(c, x));
// 	printf ("%s\n", strchr(c, x));
// 	return (0);
// }
