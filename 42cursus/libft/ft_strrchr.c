/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:26:42 by jemorais          #+#    #+#             */
/*   Updated: 2024/10/30 15:01:14 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	flag;

	i = 0;
	flag = -1;
	while (s[i])
	{
		if (s[i] == (char) c)
			flag = i;
		i++;
	}
	if ((unsigned char) c == '\0')
		return ((char *)s + i);
	if (flag != -1)
		return ((char *)s + flag);
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
