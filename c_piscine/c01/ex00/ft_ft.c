/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:20:21 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/21 13:40:40 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	ft;

	ft = 21;
	printf("valor de ft %d\n", ft);
	printf("endereco de ft %p\n", &ft);
	ft_ft(&ft);
	printf("%d\n", ft);
	return (0);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
