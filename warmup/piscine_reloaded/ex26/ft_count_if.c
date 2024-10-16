/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:52:54 by jemorais          #+#    #+#             */
/*   Updated: 2024/10/08 12:32:08 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i] != (void *)0)
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char	*tab[] = {"0", "Jefferson", "ska", "reggae",
						"punk", "HC", "j", "J", "jj", "bjj", "1"};

	printf("%d\n", ft_count_if(tab, &ft_strlen));
	return (0);
}
*/
