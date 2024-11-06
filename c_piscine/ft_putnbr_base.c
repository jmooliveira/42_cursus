#include <unistd.h>

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	ft_putnbr_base(int nb, int fd)
{
	int	count;

	count = 0;
	if (nb > 15)
	{
		count += ft_putnbr_base(nb / 16, fd);
		nb = nb % 16;
	}
	if (*up_lo == 'X')
	{
		if (nb > 9)
			count += ft_putchar(nb - 10 + 'A', fd);
		else
			count += ft_putchar(nb + '0', fd);
	}
	else
	{
		if (nb > 9)
			count += ft_putchar(nb - 10 + 'a', fd);
		else
			count += ft_putchar(nb + '0', fd);
	}
	return (count);
}

int	main(void)
{
	int	nbr;

	nbr = 15;
	ft_putnbr_base(nbr, 1);
	return (0);
}
