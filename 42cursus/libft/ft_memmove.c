/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:48:49 by jemorais          #+#    #+#             */
/*   Updated: 2024/10/15 16:56:58 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;
	size_t			i;

	ptr_dest = (unsigned char *) dest;
	ptr_src = (unsigned char *) src;
	i = 0;
	if (ptr_dest >= ptr_src && ptr_dest < ptr_src + n)
		while (n--)
			ptr_dest[n] = ptr_src[n];
	else
	{
		while (i < n)
		{
			ptr_dest[i] = ptr_src[i];
			i++;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char	source[36] = "lorem ipsum dolor sit amet";
// 	//char	dst[20] = "Oliveira, ";
// 	char	dst2[36];
// 	size_t	nb;

// 	nb = 8;
// 	ft_memmove(dst2, source, nb);
// 	printf("%s\n", dst2);
// 	memmove(dst2, source, nb);
// 	printf("%s\n", dst2);
// 	return (0);
// }
