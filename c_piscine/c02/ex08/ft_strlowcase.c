/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:57:47 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/19 18:30:51 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

char *ft_strlowcase(char *str);

int     main(void)
{
	char	str[13] = "HELLO, WORLD!";
	int		i;

    i = 0;
	ft_strlowcase(str);
    while (i < 14)
    {
	    printf("%c", str[i]);
        i++;
    }
    return (0);
}*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
