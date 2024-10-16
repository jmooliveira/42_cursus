/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:47:45 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/21 16:50:24 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	name[] = "Jefferson";
	char	copy_name[50];
	int		i;

	i = 0;
	ft_strcpy(copy_name, name);
	printf("%s", copy_name);
}*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
