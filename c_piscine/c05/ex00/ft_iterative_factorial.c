/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:11:03 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/30 17:37:13 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	n;

	scanf("%d", &n);
	printf("%d", ft_iterative_factorial(n));
	return (0);
}*/

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (i > 1)
	{
		nb *= i - 1;
		i--;
	}
	return (nb);
}
