/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:38:16 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/19 17:51:48 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	str[] = "HELL";
	int		check;

	check = ft_str_is_uppercase(str);
	printf("%d\n", check);
	return (0);
}*/

int	ft_str_is_uppercase(char *str)
{
	int	upp;
	int	i;

	upp = 1;
	i = 0;
	while (*str != '\0')
	{
		if (! (*str >= 'A' && *str <= 'Z'))
		{
			upp = 0;
		}
		str++;
	}
	return (upp);
}
