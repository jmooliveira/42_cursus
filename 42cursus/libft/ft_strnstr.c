/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:49:55 by jemorais          #+#    #+#             */
/*   Updated: 2024/10/30 15:20:21 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	i = 0;
	j = 0;
	little_len = ft_strlen(little);
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (j + 1 == little_len)
				return ((char *) big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	b[9] = "Jefferson";
// 	char	l[3] = "ffr";
// 	size_t	i;

// 	i = 9;
// 	printf("%s\n", ft_strnstr(b, l, i));
// 	//printf("%s\n", strnstr(b, l, i));
// 	return (0);
// }
