/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:04:18 by jemorais          #+#    #+#             */
/*   Updated: 2024/11/01 19:23:02 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = -1;
	while (s[++i])
		write(fd, &s[i], 1);
}

void	ft_putnbrbase_fd(unsigned long nb, int fd, int flag)
{
	if (nb == '\0')
		return ;
	else if (flag == 1)
	{
		write(1, "0x", 2);
		flag = 0;
	}
	if (nb > 15)
		ft_putnbrbase_fd(nb / 16, fd, flag);
	nb = nb % 16;
	if (nb > 9)
		ft_putchar_fd(nb - 10 + 'a', fd);
	else
		ft_putchar_fd(nb + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	char			c;
	unsigned int	nb;

	if (n < 0)
	{
		write(fd, "-", 1);
		nb = -1 * (unsigned int)(n);
	}
	else
		nb = (unsigned int) n;
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	c = 48 + nb % 10;
	write(fd, &c, 1);
}

void	ft_putunsignednbr_fd(unsigned int n, int fd)
{
	char			c;
	unsigned int	nb;

	nb = n;
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	c = 48 + nb % 10;
	write(fd, &c, 1);
}

// ft_putnbrbaseupperlower_fd(va_arg(print, char), 1)
// {

// }

void	ft_check_arg(const char *frt, va_list print)
{
	if (*frt == 'c')
		ft_putchar_fd(va_arg(print, int), 1);
	else if (*frt == 's')
		ft_putstr_fd(va_arg(print, char *), 1);
	else if (*frt == 'p')
		ft_putnbrbase_fd((unsigned long)va_arg(print, void *), 1, 1);
	else if (*frt == 'd' || *frt == 'i')
		ft_putnbr_fd(va_arg(print, int), 1);
	else if (*frt == 'u')
		ft_putunsignednbr_fd(va_arg(print, unsigned int), 1);
	// else if (*frt == 'x' || *frt == 'X')
		// ft_putnbrbaseupperlower_fd(va_arg(print, char), 1);
}

int	ft_printf(const char *frt, ...)
{
	va_list	print;
	int		i;

	i = 0;
	va_start(print, frt);
	while (frt[i])
	{
		if (frt[i] == '%')
		{
			i++;
			ft_check_arg(&frt[i], print);
		}
		else
			write (1, &frt[i], 1);
		i++;
	}
	va_end(print);
	return (i);
}

int	main(void)
{
	unsigned int	nbr;
	char			*ptr;

	nbr = -42;
	ptr = "fck";
	ft_printf("Hell %u heaven %p minha\n", nbr, ptr);
	printf("Hell %u heaven %p padrao\n", nbr, ptr);
	return (0);
}
