#include "libft.h"

char	*next_word(const	char	**s, char	c)
{
	while (**s && **s == c)
		(*s)++;
	return ((char	*)*s);
}

char	*stop_word(const	char	**s, char	c)
{
	while (**s && **s != c)
		(*s)++;
	return ((char	*)*s);
}

int	count_words(const	char	*s, char	c)
{
	int	count;

	count = 0;
	while (*s)
	{
		next_word(&s, c);
		if (*s)
			count++;
		stop_word(&s, c);
	}
	return (count);
}

int	create_massive(const	char	*s, char	c, char	**split, int	count)
{
	int	i;
	int	size;
	char	*nword;
	char	*sword;

	i = 0;
	while (i < count)
	{
		nword = next_word(&s, c);
		sword = stop_word(&s, c);
		size = sword - nword + 1;
		split[i] = (char	*)malloc(sizeof(char) * size);
		if (!split[i])
			return (i);
		ft_strlcpy(split[i], nword, size);
		i++;
	}
	return (i);
}

char	**ft_split(const	char	*s, char	c)
{
	char	**split;
	int	count;
	int	count_created_words;
	int	i;

	if (!s)
		return (NULL);
	count = count_words(s, c);
	split = (char	**)malloc(sizeof(char	*) * (count + 1));
	if (!split)
		return (NULL);
	count_created_words = create_massive(s, c, split, count);
	if (count_created_words != count)
	{
		i = 0;
		while (i < count_created_words)
		{
			free(split[i]);
			i++;
		}
		free(split);
		return (NULL);
	}
	split[count] = NULL;
	return (split);
}
