/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:36:24 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/30 13:38:46 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap_params(char *par1, char *par2);
void	ft_print_params(int argc, char argv);

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (argv[i][j] && argv[i + 1][j])
		{
			if (argv[i][j] == argv[i + 1][j])
				continue ;
			else
			{
				ft_swap_params(&argv[i][j], &argv[i + 1][j]);
				i = 0;
			}
			j++;
		}
		i++;
	}
	ft_print_params(argc, **argv);
	return (0);
}

void	ft_swap_params(char *par1, char *par2)
{
	char	*swap;

	swap = par1;
	par1 = par2;
	par2 = swap;
}

void	ft_print_params(int argc, char argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
			write (1, &argv[i][j], 1);
			j++;
		}
		j = 0;
		i++;
		write (1, "\n", 1);
	}
}
