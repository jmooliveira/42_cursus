/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:33:10 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/30 13:33:56 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = argc - 1;
	j = 0;
	while (i > 0)
	{
		while (argv[i][j])
		{
			write (1, &argv[i][j], 1);
			j++;
		}
		j = 0;
		i--;
		write (1, "\n", 1);
	}
	return (0);
}
