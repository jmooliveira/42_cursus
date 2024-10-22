#include "libft.h"

static int	ft_words_count(char const *s, char c)
{
	int	count_words;

	if (!*s)
		return (0);
	count_words = 1;
	while (*s)
	{
		if(*s == c && *s)
			count_words++;
		s++;
	}
	printf("%d\n", count_words);
	return (count_words);
}

char	**ft_split(char const *s, char c)
{
	char **split;

	split = (char **)ft_calloc(ft_words_count(s, c) + 1, sizeof(char *));
	if (!split)
		return (NULL);
	c = 'c';
	return (split);
}

int	main(void)
{
	char	phr[] = "Eu gosto de suco de maçã e também de baguetes";
	char	ch = ' ';

	ft_split(phr, ch);
	return (0);
}