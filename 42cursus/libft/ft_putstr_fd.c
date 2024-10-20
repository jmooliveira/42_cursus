#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = -1;
	while (s[++i])
		write(fd, &s[i], 1);
}
/*
int	main(void)
{
	char	c_a[] = "";

	ft_putstr_fd(c_a, 1);
}
*/