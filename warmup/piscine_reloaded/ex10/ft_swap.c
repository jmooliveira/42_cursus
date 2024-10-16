/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:54:40 by jemorais          #+#    #+#             */
/*   Updated: 2024/10/04 19:08:07 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *b;
	*b = *a;
	*a = swap;
}

/*
int	main(void)
{
	int	x;
	int	y;

	x = 21;
	y = 42;
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	ft_swap(&x, &y);
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	return (0);
}
*/
