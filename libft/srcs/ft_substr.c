#include "libft.h"

char	*ft_substr(const	char	*s, unsigned	int	start, size_t	len)
{
	size_t	i;
	size_t	j;
	char	*result;

	if (!s)
		return (NULL);
	result = (char	*)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			result[j] = s[i];
			j++;
		}
		i++;
	}
	result[j] = 0;
	return (result);
}
