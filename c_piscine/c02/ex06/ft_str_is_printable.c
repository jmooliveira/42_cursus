/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:53:16 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/21 19:56:19 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	str[] = "HelloWorld!\n";
	int		check;

	check = ft_str_is_printable(str);
	printf("%d\n", check);
	return (0);
}*/

int	ft_str_is_printable(char *str)
{
	int	able;
	int	i;

	able = 1;
	i = 0;
	while (*str != '\0')
	{
		if (! (*str >= 32 && *str <= 126))
		{
			able = 0;
		}
		str++;
	}
	return (able);
}
