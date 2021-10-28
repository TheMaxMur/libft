#include "libft.h"

char	*ft_strjoin(const	char	*s1, const	char	*s2)
{
	char	*result;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	result = (char *)malloc(
			sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		result[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		result[j++] = s2[i];
		i++;
	}
	result[j] = 0;
	return (result);
}
