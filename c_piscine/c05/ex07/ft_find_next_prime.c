/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:17:03 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/31 18:28:29 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb);
int	ft_is_prime(int i);

/*#include <stdio.h>
int	main(void)
{
	int	nb;

	scanf("%d", &nb);
	printf("%d", ft_find_next_prime(nb));
	return (0);
}*/

int	ft_find_next_prime(int nb)
{
	int	i;
	int	prime;

	i = nb;
	prime = ft_is_prime(nb);
	if (prime == 0 && nb < 46340)
	{
		i = ft_find_next_prime(nb + 1);
	}
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
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
