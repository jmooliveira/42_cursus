/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:15:23 by jemorais          #+#    #+#             */
/*   Updated: 2024/10/04 19:17:54 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

void	ft_putchar(char a);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
/*
int	main(void)
{
	ft_putstr("Hello\n");
	return (0);
}

void	ft_putchar(char a)
{
	write (1, &a, 1);
}
*/
