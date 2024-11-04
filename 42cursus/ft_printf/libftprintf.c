/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeff <jeff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:04:18 by jemorais          #+#    #+#             */
/*   Updated: 2024/11/03 23:01:01 by jeff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_fd(char c, int fd)
{
	size_t count;
	
	count = 1;
	write(fd, &c, 1);
	return (count);
}

int	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (s == NULL)
		return (0);
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	return (i);
}

void	ft_putnbrbaseptr_fd(unsigned long nb, int fd, int flag)
{
	if (nb == 0 && flag != 1)
		return ;
	else if (flag == 1)
	{
		write(1, "0x", 2);
		flag = 0;
	}
	if (nb > 15)
		ft_putnbrbaseptr_fd(nb / 16, fd, flag);
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
	c = '0' + nb % 10;
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

void	ft_putnbrbase_fd(long int nb, int fd, char up_lo)
{
	if (nb == '\0')
		return ;
	if (nb > 15)
		ft_putnbrbase_fd(nb / 16, fd, up_lo);
	nb = nb % 16;
	if (nb > 9)
	{
		if (up_lo == 'X')
			ft_putchar_fd(nb - 10 + 'A', fd);
		else
			ft_putchar_fd(nb - 10 + 'a', fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
}

void	ft_putnbrbaseupperlower_fd(long int nb, const char *frt, int fd)
{
	if (*frt == 'x')
		ft_putnbrbase_fd(nb, fd, 'x');
	if (*frt == 'X')
		ft_putnbrbase_fd(nb, fd, 'X');
}

int	ft_check_arg(const char *frt, va_list print)
{
	size_t	count;

	count = 0;
	if (*frt == 'c')
		count += ft_putchar_fd(va_arg(print, int), 1);
	else if (*frt == 's')
		count += ft_putstr_fd(va_arg(print, char *), 1);
	else if (*frt == 'p')
		ft_putnbrbaseptr_fd((unsigned long)va_arg(print, void *), 1, 1);
	else if (*frt == 'd' || *frt == 'i')
		ft_putnbr_fd(va_arg(print, int), 1);
	else if (*frt == 'u')
		ft_putunsignednbr_fd(va_arg(print, unsigned int), 1);
	else if (*frt == 'x' || *frt == 'X')
		ft_putnbrbaseupperlower_fd((long int)va_arg(print, long int), frt, 1);
	else if (*frt == '%')
	{
		write (1, "%", 1);
		count++;
	}
	return (count);
}

int	ft_printf(const char *frt, ...)
{
	va_list	print;
	int		i;
	size_t	count;

	if (!frt)
		return (-1);
	i = 0;
	count = 0;
	va_start(print, frt);
	while (frt[i])
	{
		if (frt[i] == '%')
		{
			i++;
			count += ft_check_arg(&frt[i], print);
		}
		else
		{
			write (1, &frt[i], 1);
			count++;
		}
		i++;
	}
	va_end(print);
	return (count);
}

int	main(void)
{
	unsigned int	nbr;
	char			*ptr;

	nbr = -42;
	ptr = "fck";
	printf("%d\n", ft_printf("%c Hell %X heaven %p minha %s %%\n", 'a', nbr, ptr, ptr));
	printf("%d\n", printf("%c Hell %X heaven %p padrao %s %%\n", 'a', nbr, ptr, ptr));
	return (0);
}

