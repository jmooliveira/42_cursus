/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 20:48:35 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/24 17:47:18 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_atoi(char *str);

int	main(int argc, char *argv[])
{
	printf("%d", ft_atoi(argv[1]));
	return (0);
}*/

int	ft_atoi(char *str)
{
	int	result;
	int	count;

	result = 0;
	count = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			result = result * 10 + (*str - '0');
		else if (*str == '-')
			count++;
		else if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
			break ;
		str++;
	}
	if (count % 2 != 0)
		return (result * (-1));
	return (result);
}
