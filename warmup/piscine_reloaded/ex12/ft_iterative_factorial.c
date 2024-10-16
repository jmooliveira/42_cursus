/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:42:20 by jemorais          #+#    #+#             */
/*   Updated: 2024/10/04 19:11:42 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb == 1 || nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (nb != 1)
	{
		fact *= nb;
		nb--;
	}
	return (fact);
}
/*
int	main(void)
{
	int	n;

	scanf("%d", &n);
	printf("%d\n", ft_iterative_factorial(n));
	return (0);
}
*/
