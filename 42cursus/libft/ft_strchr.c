/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:50:11 by jemorais          #+#    #+#             */
/*   Updated: 2024/10/30 14:01:49 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

// int	main(void)
// {
// 	const char	c[30] = "Text";
// 	char		x;

// 	x = '\0';
// 	printf ("%s\n", ft_strchr(c, x));
// 	printf ("%s\n", strchr(c, x));
// 	return (0);
// }
