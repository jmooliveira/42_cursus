/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeff <jeff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:04:35 by jemorais          #+#    #+#             */
/*   Updated: 2024/10/17 19:58:44 by jeff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// #include <stddef.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			len;
	unsigned char	*ptr_src;
	unsigned char	u_c;

	len = 0;
	ptr_src = (unsigned char *)s;
	u_c = (unsigned char) c;
	while (len < n)
	{
		if (ptr_src[len] == u_c)
			return (&ptr_src[len]);
		len++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	source[15] = "roberto GoHorse";
	char	charac = 'G';
	size_t	nb;

	nb = 15;
	printf("%s\n", (char *)ft_memchr(source, charac, nb));
	printf("%s\n", (char *)memchr(source, charac, nb));
	return (0);
}
*/
