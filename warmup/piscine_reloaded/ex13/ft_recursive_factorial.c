/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:59:33 by jemorais          #+#    #+#             */
/*   Updated: 2024/10/08 12:04:24 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main(void)
{
	int	n;int	main(void)
{
	int	n;

	scanf("%d", &n);
	printf("%d\n", ft_recursive_factorial(n));
	return (0);


	scanf("%d", &n);
	printf("%d\n", ft_recursive_factorial(n));
	return (0);
}
*/
