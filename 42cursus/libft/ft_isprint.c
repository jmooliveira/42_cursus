/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:41:49 by jemorais          #+#    #+#             */
/*   Updated: 2024/10/30 13:42:48 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char	c;

// 	scanf("%c", &c);
// 	printf("%d\n",ft_isprint(c));
// 	printf("%d\n",isprint(c));
// 	return (0);
// }
