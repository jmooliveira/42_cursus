/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:26:42 by jemorais          #+#    #+#             */
/*   Updated: 2024/10/14 16:08:26 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	box;

	i = 0;
	box = 'NULL';
	while (s[i])
	{
		if (s[i] == (char) c)
			box = i;
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	if (box != 'NULL')
		return ((char *)s + box);
	return (NULL);
}

// int	main(void)
// {
// 	const char	c[15] = "Jeffersone";
// 	int			x;

// 	x = 'o';
// 	printf("%s\n", ft_strrchr(c, x));
// 	printf("%s\n", strrchr(c, x));
// 	return (0);
// }
