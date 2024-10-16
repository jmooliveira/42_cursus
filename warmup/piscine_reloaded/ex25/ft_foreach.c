/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:02:49 by jemorais          #+#    #+#             */
/*   Updated: 2024/10/07 15:49:48 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*
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
int	main(void)
{
	int	tab[11] = {-1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	ft_foreach(tab, 11, &ft_putnbr);
	return (0);
}
*/
