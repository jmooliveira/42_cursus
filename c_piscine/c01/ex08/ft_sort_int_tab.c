/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:53:43 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/17 16:54:13 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	nbr[10] = {7, 8, 2, 5, 9, 1, 0, 4, 3, 6};
	int	i;

	i = 0;
	ft_sort_int_tab(nbr, 10);
	while (i < 10)
	{
		printf("%d", nbr[i]);
		i++;
	}
	return (0);
}*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{	
		if (tab[i + 1] < tab[i])
		{
			j = i;
			while (j >= 0)
			{
				if (tab[j + 1] < tab [j])
				{
					aux = tab[j + 1];
					tab[j + 1] = tab[j];
					tab[j] = aux;
				}
				j--;
			}
		}
		i++;
	}	
}
