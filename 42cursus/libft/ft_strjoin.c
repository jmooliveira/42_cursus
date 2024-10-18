#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ptr = (char *) ft_calloc (len_s1 + len_s2 + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, len_s1 + 1);
	ft_strlcat(ptr, s2, len_s2 + len_s1 + 1);
	return (ptr);
}
/*
int	main(void)
{
	char	str1[9] = "Jefferson";
	char	str2[8] = " Morais";

	printf("%s\n",ft_strjoin(str1, str2));
	return (0);
}
*/