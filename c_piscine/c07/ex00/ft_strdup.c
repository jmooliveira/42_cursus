/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:08:03 by jemorais          #+#    #+#             */
/*   Updated: 2024/08/01 12:53:20 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

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

char	*ft_strdup(char *src)
{
	char	*dest;
	int		lenght;

	lenght = ft_strlen(src);
	dest = malloc ((lenght + 1) * sizeof(char));
	if (dest == NULL)
		return (dest);
	ft_strcpy(dest, src);
	return (dest);
}

int	main(void)
{
	char	*source;
	char	*copy;

	source = "Jefferson";
	copy = source;
	printf("%s", ft_strdup(source));
	return (0);
}
