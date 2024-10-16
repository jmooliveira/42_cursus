/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:06:02 by jemorais          #+#    #+#             */
/*   Updated: 2024/10/01 17:16:48 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

void	ft_putchar(char a);

void	ft_is_negative(int x)
{
	if (x < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

/*void	ft_putchar(char a)
{
	write (1, &a, 1);
}

int	main(void)
{
	int	x;

	scanf("%d", &x);
	ft_is_negative(x);
	return (0);
}
*/
