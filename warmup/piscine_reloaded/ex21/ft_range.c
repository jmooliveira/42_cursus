/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:51:56 by jemorais          #+#    #+#             */
/*   Updated: 2024/10/08 12:30:17 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array_int;
	int	range;
	int	count;

	if (min >= max)
		return (NULL);
	range = max - min;
	array_int = (int *)malloc(range * sizeof(int));
	count = 0;
	while (count < range)
	{
		array_int[count] = min;
		count++;
		min++;
	}
	return (array_int);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*range_print;
	int	count;

	count = 0;
	scanf("%d%d", &min, &max);
	range_print = ft_range(min, max);
	while (min != max)
	{
		printf("%d", range_print[count]);
		count++;
		min++;
	}
	return (0);
}
*/
