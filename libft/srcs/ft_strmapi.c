#include "libft.h"

char	*ft_strmapi(const	char	*s, char	(*f)(unsigned	int, char))
{
	char	*result;
	size_t	i;

	if (!s)
		return (NULL);
	result = ft_strdup(s);
	if (!result)
		return (NULL);
	i = 0;
	while (result[i])
	{
		result[i] = (*f)(i, result[i]);
		i++;
	}
	return (result);
}
