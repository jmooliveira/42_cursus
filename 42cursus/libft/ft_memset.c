/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:12:41 by jemorais          #+#    #+#             */
/*   Updated: 2024/10/14 12:23:20 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*pt;

	i = 0;
	pt = s;
	while (i < n && (s))
	{
		*pt = (unsigned char) c;
		pt++;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 		char	str[10] = "jefferson";
// 		char	c;
// 		char	d;
// 		size_t	size;

// 		c = '-';
// 		d = '~';
// 		size = 5;
// 		printf("%s\n", str);
// 		ft_memset(str, c, size);
// 		printf("%s\n", str);
// 		memset(str, d, size);
// 		printf("%s\n", str);
// 	return (0);
// }
