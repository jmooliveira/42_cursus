/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 20:23:57 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/24 17:30:46 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(-9);
	return (0);
}*/

void	ft_putnbr(int nb)
{
	unsigned char	c;
	unsigned char	hifen;
	unsigned int	hi;

	hifen = '-';
	hi = nb;
	if (nb < 0)
	{
		write(1, &hifen, 1);
		hi = nb *(-1);
	}
	if (hi >= 10)
	{
		ft_putnbr(hi / 10);
		hi = hi % 10;
	}
	c = hi + '0';
	write(1, &c, 1);
}
