/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:16:29 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/30 14:31:00 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int	n;
	int	power;

	scanf("%d", &n);
	scanf("%d", &power);
	printf("%d", ft_iterative_power(n, power));
	return (0);
}*/

int	ft_iterative_power(int nb, int power)
{
	int	nbr_pow;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	nbr_pow = nb;
	while (power > 1)
	{
		nbr_pow *= nb;
		power--;
	}
	return (nbr_pow);
}
