/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:36:21 by jemorais          #+#    #+#             */
/*   Updated: 2024/08/01 19:04:36 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*len;

	i = 0;
	scanf("%d", &min);
	scanf("%d", &max);
	len = ft_range(min, max);
	while (min < max)
	{
		printf("%d", len[i]);
		min++;
		i++;
	}
	free(len);
	return (0);
}

int	*ft_range(int min, int max)
{
	int	*length;
	int	i;

	if (min >= max)
	{
		length = NULL;
		return (length);
	}
	length = malloc (((max - min) + 1) * sizeof(int));
	i = 0;
	while (min < max)
	{
		length[i] = min;
		min++;
		i++;
	}
	length[i] = '\0';
	return (length);
}
