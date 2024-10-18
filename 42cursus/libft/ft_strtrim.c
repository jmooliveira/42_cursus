#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned char	*ptr;
	int				i;
	int				len_s1;

	if (!s1)
		return (NULL);
	i = 0;
	len_s1 = ft_strlen(s1);

	return (ptr);
}

int	main(void)
{
	char	str[3] = "ana";
	char	s = 'a';

	printf("%d\n",ft_strtrim(str, s));
	return (0);
}
