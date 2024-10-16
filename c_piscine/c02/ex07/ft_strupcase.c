/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:52:45 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/19 18:29:01 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

char    *ft_strupcase(char *str);

int     main(void)
{
	char	str[13] = "Hello, World!";
	int		i;

    i = 0;
	ft_strupcase(str);
    while (i < 14)
    {
	    printf("%c", str[i]);
        i++;
    }
    return (0);
}*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
