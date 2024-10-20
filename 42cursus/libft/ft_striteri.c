#include "libft.h"
/*
void ft_toupper_adapted(unsigned int a, char *c)
{
	(void) a;
	if (c[a] >= 'a' && c[a] <= 'z')
		c -= 32;
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
int	main(void)
{
	char	src[9] = "jefferson";

	ft_striteri(src, ft_toupper_adapted);
 	printf("%s\n", src);
	return (0);
}
*/