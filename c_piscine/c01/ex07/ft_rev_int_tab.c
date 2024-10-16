/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:59:00 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/17 16:59:38 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	nbr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	i;

	i = 0;
	ft_rev_int_tab(nbr, 10);
	while (i < 10)
	{
		printf("%d", nbr[i]);
		i++;
	}
	return (0);
}*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		aux = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = aux;
		i++;
	}
}
