/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:54:20 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/31 13:38:08 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	main(void)
{
	int	nb;

	scanf("%d", &nb);
	printf("%d", ft_is_prime(nb));
	return (0);
}*/

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*int	ft_is_prime_recursive(int nb, int i)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (0);
	if (nb == i)
		return (1);
	if (nb % i == 0)
		return (0);
	return (ft_is_prime_recursive (nb, i + 1));
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 2)
		return (1);
	return (ft_is_prime_recursive(nb, i));
}*/
