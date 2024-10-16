/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:50:45 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/22 18:51:06 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	destination[50] = "hello, ";
	char	source[] = "hello";

	printf("%s\n", ft_strcat(destination, source));
	return (0);
}*/

char	*ft_strcat(char *dest, char *src)
{
	int	d;
	int	s;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	s = 0;
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
