/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:40:17 by jemorais          #+#    #+#             */
/*   Updated: 2024/10/16 19:02:05 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stddef.h>
// #include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	temp = malloc (nmemb * size);
	if (!temp)
		return (NULL);
	while (i < size * nmemb)
		temp[i++] = 0;
	return (temp);
}

// int	main(void)
// {
// 	char	nmem;
// 	size_t	nb;

// 	nmem = 'a';
// 	nb = 5;
// 	ft_calloc(nmem, nb);
// 	return (0);
// }
