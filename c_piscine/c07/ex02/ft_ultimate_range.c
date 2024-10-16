/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 18:16:29 by jemorais          #+#    #+#             */
/*   Updated: 2024/08/01 19:02:17 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	len;
	int	**range;

	i = 0;
	scanf("%d", &min);
	scanf("%d", &max);
	len = ft_ultimate_range(&range, min, max);
	//printf("%d", len);
	free(range);
	return (0);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	length;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc (((max - min) + 1) * sizeof(int));
	i = 0;
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		*range[i] = min;
		min++;
		i++;
	}
	return (max - min);
}
