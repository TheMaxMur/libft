#include "libft.h"

int	ft_strncmp(const	char	*s1, const	char	*s2, size_t	n) {
	int	i;

	i = 0;
	while (i < (int)n) {
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		else {
			if (s1[i] =='\0' || s2[i] == '\0')
				return (*(unsigned char*)(s1 + i) - *(unsigned char*)(s2 + i));
		}
		if (*(unsigned char*)(s1 + i) != *(unsigned char*)(s2 + i))
			return (*(unsigned char*)(s1 + i) - *(unsigned char*)(s2 + i));
		i++;
	}
	return (0);
}
