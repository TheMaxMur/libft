#include "libft.h"

char	*ft_strdup(const	char	*s)
{
	char	*dup;
	int	i;

	dup = (char	*)malloc(sizeof(char) * ((int)ft_strlen(s) + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
