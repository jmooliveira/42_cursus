/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:20:40 by jemorais          #+#    #+#             */
/*   Updated: 2024/10/03 11:44:24 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	unit;

	unit = 0;
	while (unit <= 46340 || unit <= (nb / 3))
	{
		if ((unit * unit) == nb)
		{
			return (unit);
		}
		unit++;
	}
	return (0);
}
/*
int	main(void)
{
	int	n;

	scanf("%d", &n);
	printf("%d\n", ft_sqrt(n));
	return (0);
}
*/
