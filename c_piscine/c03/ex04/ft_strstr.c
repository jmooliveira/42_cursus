/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:07:48 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/29 19:38:13 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	stance[] = "";
	char	search[] = "";

	printf("%s", ft_strstr(stance, search));
	return (0);
}*/
// NULL is stdio.h

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while ((str[i + j] == to_find[j]) && to_find[j] != '\0')
			{
				if (str[i + j] == to_find[j] && to_find[j + 1] == '\0')
				{
					return (&str[i]);
				}
				j++;
			}
		}
		i++;
	}
	return ("");
}
