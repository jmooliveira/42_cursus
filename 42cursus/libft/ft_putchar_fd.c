#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	char	c_a;

	c_a = 'a';
	ft_putchar_fd(c_a, 1);
}
*/
