#include "libft.h"

char	*ft_strrchr(const	char	*str, int	sym) {
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0) {
		 if (str[i] == (char)sym)
			 return ((char *)(str + i));
		i--;
	}
	return (NULL);
}
