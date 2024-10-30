/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:37:05 by jemorais          #+#    #+#             */
/*   Updated: 2024/10/30 13:37:06 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*pass_struct;
	int		count;

	pass_struct = lst;
	count = 0;
	while (pass_struct)
	{
		pass_struct = pass_struct->next;
		count += 1;
	}
	return (count);
}
