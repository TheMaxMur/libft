#include "libft.h"

char	*ft_strchr(const	char	*str, int	sym) {
	int	i;

	i = 0;
	while (str[i]) {
		 if (str[i] == (char)sym)
			 return ((char *)(str + i));
		i++;
	}
	if (str[i] == (char)sym)
		return ((char*)(str + i));
	return (NULL);
}
