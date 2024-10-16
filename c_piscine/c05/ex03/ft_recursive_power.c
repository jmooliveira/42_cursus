/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:31:55 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/29 16:51:23 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int	n;
	int	power;

	scanf("%d", &n);
	scanf("%d", &power);
	printf("%d", ft_recursive_power(n, power));
	return (0);
}*/

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}
