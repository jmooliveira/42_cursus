/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:41:23 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/21 20:06:13 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

/*#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[56] = "oi, tUdo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	int		i;

	i = 0;
	ft_strcapitalize(str);
	while (i < 57)
	{
		printf("%c", str[i]);
		i++;
	}
	return (0);
}*/

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = ft_strlen(str);
	while (i < count - 1)
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		else if ((str[i - 1] < '0' || (str[i - 1] > '9' && str[i - 1] < 'A')
				|| (str[i - 1] > 'Z' && str[i - 1] < 'a') || str[i - 1] > 'z')
			&& (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		else if ((str[i - 1] >= '0' && str[i - 1] <= '9') || (str[i - 1] >= 'A'
				&& str[i - 1] <= 'Z') || (str[i - 1] >= 'a'
				&& str[i - 1] <= 'z'))
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}
