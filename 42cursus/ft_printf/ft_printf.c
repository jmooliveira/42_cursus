/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:04:18 by jemorais          #+#    #+#             */
/*   Updated: 2024/11/04 16:34:04 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrbase(long int nb, char up_lo)
{
	int	count;

	count = 0;
	if (nb == '\0')
		return (0);
	if (nb > 15)
		count += ft_putnbrbase(nb / 16, up_lo);
	nb = nb % 16;
	if (nb > 9)
	{
		if (up_lo == 'X')
			count += ft_putchar(nb - 10 + 'A');
		else
			count += ft_putchar(nb - 10 + 'a');
	}
	else
		count += ft_putchar(nb + '0');
	return (count);
}

int	ft_putnbrbaseupperlower(long int nb, const char *frt)
{
	int	count;

	count = 0;
	if (*frt == 'x')
		count = ft_putnbrbase(nb, 'x');
	if (*frt == 'X')
		count = ft_putnbrbase(nb, 'X');
	return (count);
}

int	ft_putunsignednbr(unsigned int n)
{
	char			c;
	unsigned int	nb;
	int				count;

	nb = n;
	count = 0;
	if (nb > 9)
		count += ft_putnbr(nb / 10);
	c = 48 + nb % 10;
	write(1, &c, 1);
	count++;
	return (count);
}

int	ft_putnbr(int n)
{
	char			c;
	unsigned int	nb;
	int				count;

	count = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		nb = -1 * (unsigned int)(n);
		count++;
	}
	else
		nb = (unsigned int) n;
	if (nb > 9)
		count += ft_putnbr(nb / 10);
	c = '0' + nb % 10;
	write(1, &c, 1);
	count++;
	return (count);
}

int	ft_putnbrbaseptr(unsigned long nb, int flag)
{
	int	count;

	count = 0;
	if (nb == 0 && flag != 1)
		return ('\0');
	else if (flag == 1)
	{
		write(1, "0x", 2);
		flag = 0;
		count += 2;
	}
	if (nb > 15)
		count += ft_putnbrbaseptr(nb / 16, flag);
	nb = nb % 16;
	if (nb > 9)
		count += ft_putchar(nb - 10 + 'a');
	else
		count += ft_putchar(nb + '0');
	return (count);
}

int	ft_putstr(char *s)
{
	int		i;
	char	*str;

	str = s;
	if (str == NULL)
	{
		write (1, "(null)", 1);
		return (6);
	}
	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_putchar(char c)
{
	int	count;

	count = 1;
	write(1, &c, 1);
	return (count);
}

int	ft_check_arg(va_list print, const char *frt)
{
	int	count;

	count = 0;
	if (*frt == 'c')
		count += ft_putchar(va_arg(print, int));
	else if (*frt == 's')
		count += ft_putstr(va_arg(print, char *));
	else if (*frt == 'p')
		count += ft_putnbrbaseptr((unsigned long)va_arg(print, void *), 1);
	else if (*frt == 'd' || *frt == 'i')
		count += ft_putnbr(va_arg(print, int));
	else if (*frt == 'u')
		count += ft_putunsignednbr(va_arg(print, unsigned int));
	else if (*frt == 'x' || *frt == 'X')
		count += ft_putnbrbaseupperlower((long int)va_arg(print, long int), frt);
	else if (*frt == '%')
	{
		write (1, "%", 1);
		count++;
	}
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
	int	count;

	if (!frt)
		return (-1);
	count = 0;
	va_start(print, frt);
	count = ft_find_parameter(print, frt);
	va_end(print);
	return (count);
}

int	main(void)
{
	unsigned int	nbr;
	char			*ptr;

	nbr = 4242424242;
	ptr = "fck";
	printf("%d\n", ft_printf("%c Hell %X heaven %p minha1 %s \n", 'a', nbr, &ptr, ptr));
	printf("%d\n", printf("%c Hell %X heaven %p padrao %s \n", 'a', nbr, &ptr, ptr));
	//printf("%d\n", ft_printf(" NULL %s NULL \n", NULL));
	//printf("%d\n", printf(" NULL %s NULL \n", NULL));
	return (0);
}
