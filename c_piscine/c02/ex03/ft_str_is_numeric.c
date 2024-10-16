/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:18:30 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/18 19:20:03 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	str[] = "123456789!";
	int		check;

	check = ft_str_is_numeric(str);
	printf("%d\n", check);

	return (0);
}*/

int	ft_str_is_numeric(char *str)
{
	int	numeric;
	int	i;

	numeric = 1;
	i = 0;
	while (*str != '\0')
	{
		if (! (*str >= '0' && *str <= '9'))
		{
			numeric = 0;
		}
		str++;
	}
	return (numeric);
}
