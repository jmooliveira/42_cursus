#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char const	*string;
	char		*substr;
	size_t		i;

	if (!s)
		return (NULL);
	string = s;
	i = 0;
	substr = (char *) ft_calloc ((len + 1), sizeof(char));
	if (!substr)
		return (NULL);
	while (i < len)
		substr[i++] = string[start++];
	substr[i] = '\0';
	return (substr);
}
/*
int main(void)
{
	printf("%s\n",ft_substr("", 5, 8));
	return (0);
}
*/
