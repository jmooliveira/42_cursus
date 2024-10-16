/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:14:31 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/30 17:38:29 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	n;

	scanf("%d", &n);
	printf("%d", ft_recursive_factorial(n));
	return (0);
}*/

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	else
		nb = nb * ft_recursive_factorial(nb -1);
	return (nb);
}
