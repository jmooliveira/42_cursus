/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 20:30:25 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/15 20:30:35 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_print(int x, int y);

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_print(x, y);
			y = y + 1;
		}
		x = x + 1;
	}	
}

void	ft_print(int x, int y)
{
	char	x1;
	char	x2;
	char	y1;
	char	y2;

	x1 = (x / 10) + '0';
	x2 = (x % 10) + '0';
	y1 = (y / 10) + '0';
	y2 = (y % 10) + '0';
	write(1, &x1, 1);
	write(1, &x2, 1);
	write(1, " ", 1);
	write(1, &y1, 1);
	write(1, &y2, 1);
	if (x < 98 || y < 99)
	{
		write(1, ", ", 2);
	}
}
