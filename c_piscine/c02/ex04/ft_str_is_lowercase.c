/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:32:26 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/19 17:48:26 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	str[] = "helloworlD";
	int		check;

	check = ft_str_is_lowercase(str);
	printf("%d\n", check);
	return (0);
}*/

int	ft_str_is_lowercase(char *str)
{
	int	low;
	int	i;

	low = 1;
	i = 0;
	while (*str != '\0')
	{
		if (! (*str >= 'a' && *str <= 'z'))
		{
			low = 0;
		}
		str++;
	}
	return (low);
}
