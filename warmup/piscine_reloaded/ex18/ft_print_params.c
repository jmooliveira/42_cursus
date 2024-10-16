/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:32:25 by jemorais          #+#    #+#             */
/*   Updated: 2024/10/04 18:33:40 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	number_argument;
	int	i;

	number_argument = 1;
	while (number_argument < argc)
	{
		i = 0;
		while (argv[number_argument][i])
		{
			ft_putchar(argv[number_argument][i]);
			i++;
		}
		number_argument++;
		ft_putchar('\n');
	}
}
