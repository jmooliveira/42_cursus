/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:08:09 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/18 19:22:58 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	str[] = "HelloWorld!";
	int		check;

	check = ft_str_is_alpha(str);
	printf("%d\n", check);

	return (0);
}*/

int	ft_str_is_alpha(char *str)
{
	int	alpha;
	int	i;

	alpha = 1;
	i = 0;
	while (*str != '\0')
	{
		if (! ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
		{
			alpha = 0;
		}
		str++;
	}
	return (alpha);
}
