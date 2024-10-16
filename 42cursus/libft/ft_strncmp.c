/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:45:29 by jemorais          #+#    #+#             */
/*   Updated: 2024/10/16 18:29:46 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)s1[i] == (unsigned char)s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main(void)
// {
// 	char	name[20] = "abcdefgh";
// 	char	cmp[20] = "abcdwxyz";
// 	size_t	x;

// 	x = 4;
// 	printf("%d\n", ft_strncmp(name, cmp, x));
// 	printf("%d\n", strncmp(name, cmp, x));
// 	return (0);
// }
