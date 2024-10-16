/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:12:03 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/16 18:13:43 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	x;
	int	y;
	
	x = 24;
	y = 42;

	printf("x = %d\n", x);
	printf("y = %d\n", y);
	ft_swap(&x, &y);
	printf("x_swap = %d\n", x);
	printf("y_swap = %d\n", y);
	return (0);	
}*/

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
