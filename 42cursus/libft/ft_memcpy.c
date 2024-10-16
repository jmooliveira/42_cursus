/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:23:18 by jemorais          #+#    #+#             */
/*   Updated: 2024/10/16 18:31:57 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// #include <stddef.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;
	size_t			i;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);
}
// int	main()
// {
// 	char	source[9] = "Jefferson";
// 	char	source2[9] = "Jefferson";
// 	char	copy[10];
// 	char	copy2[10];
// 	size_t	len = 8;

// 	ft_memcpy(copy, source, len);
// 	printf("%s\n", copy);
// 	memcpy(copy2, source2, len);
// 	printf("%s\n", copy2);
// 	return (0);
// }
