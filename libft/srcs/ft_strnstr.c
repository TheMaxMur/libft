#include "libft.h"

char	*ft_strnstr(const	char	*s1, const	char	*s2, size_t	len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*s2)
		return ((char	*)s1);
	j = 0;
	while (s1[j] != '\0' && j < len)
	{
		if (s1[j] == s2[0])
		{
			i = 1;
			while (s2[i] != '\0' && s1[i + j] == s2[i] && (j + i) < len)
				i++;
			if (s2[i] == '\0')
				return ((char	*)&s1[j]);
		}
		j++;
	}
	return (NULL);
}
