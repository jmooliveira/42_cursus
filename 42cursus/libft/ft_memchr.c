/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:04:35 by jemorais          #+#    #+#             */
/*   Updated: 2024/10/15 16:31:21 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	len;
	char	*ptr_src;

	len = 0;
	ptr_src = (char *)s;
	while (len < n)
	{
		if (ptr_src[len] == c)
			return (&ptr_src[len]);
		len++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	source[15] = "roberto GoHorse";
// 	char	charac = 'G';
// 	size_t	nb;

// 	nb = 15;
// 	printf("%s\n", (char *)ft_memchr(source, charac, nb));
// 	printf("%s\n", (char *)memchr(source, charac, nb));
// 	return (0);
// }
