/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:15:42 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/18 11:04:46 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(-2147483647);
	return (0);
}

void	ft_putnbr(int nb)
{
	char	c;
	char	hifen;
	
	hifen = '-';	
	if (nb < 0)
	{
		write(1, &hifen, 1);
		nb = nb * (-1);
	}
	
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	c = nb + '0';
	write(1, &c, 1);
}
