/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:04:18 by jemorais          #+#    #+#             */
/*   Updated: 2024/11/06 16:53:11 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_arg(va_list print, const char *frt)
{
	int	count;

	count = 0;
	if (*frt == 'c')
		count += ft_putchar(va_arg(print, int));
	else if (*frt == 's')
		count += ft_putstr(va_arg(print, char *));
	else if (*frt == 'p')
		count += ft_check_ptr(va_arg(print, void *));
	else if (*frt == 'd' || *frt == 'i')
		count += ft_putnbr(va_arg(print, int));
	else if (*frt == 'u')
		count += ft_putnbr_unsigned(va_arg(print, long int));
	else if (*frt == 'x' || *frt == 'X')
		count += ft_putnbr_base(va_arg(print, int), frt);
	else if (*frt == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_find_parameter(va_list print, const char *frt)
{
	int	count;
	int	i;
	int	j;

	count = 0;
	i = 0;
	j = 0;
	while (frt[i])
	{
		if (frt[i] == '%')
		{
			i++;
			count += ft_check_arg(print, &frt[i]);
			j++;
		}
		else
		{
			write (1, &frt[i], 1);
			count++;
		}
		i++;
	}
	return (count);
}

int	ft_printf(const char *frt, ...)
{
	va_list	print;
	int		count;

	if (!frt)
		return (-1);
	count = 0;
	va_start(print, frt);
	count = ft_find_parameter(print, frt);
	va_end(print);
	return (count);
}

// int	main(void)
// {
// 	unsigned int	nbr;
// 	char			*ptr;

// 	nbr = -2147483648;
// 	ptr = "fck";
// 	printf("%d\n", ft_printf("Hell %X heaven %p My %s %%.\n", nbr, &ptr, ptr));
// 	printf("%d\n", printf("Hell %X heaven %p Df %s %%.\n", nbr, &ptr, ptr));
// }
