#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = -1;
	while (s[++i])
		write(fd, &s[i], 1);
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	char	c_a[] = "jefferson";

	ft_putendl_fd(c_a, 1);
}
*/