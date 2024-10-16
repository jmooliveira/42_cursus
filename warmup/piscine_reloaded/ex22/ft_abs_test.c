/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 16:59:56 by jemorais          #+#    #+#             */
/*   Updated: 2024/10/04 17:23:56 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_abs.h"

int	main(void)
{
	int	x;
	int	y;

	x = -5;
	y = -9;
	printf("%d\n", ABS(x));
	printf("%d\n", abs(y));
	return (0);
}
