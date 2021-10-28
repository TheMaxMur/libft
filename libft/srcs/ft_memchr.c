#include "libft.h"

void	*ft_memchr(const	void	*arr, int	c, size_t	n) {
	int	i;

	i = 0;
	while (i < (int)n) {
		if (*(unsigned char*)(arr + i) == (unsigned char)c)
			return (&(*(unsigned char*)(arr + i)));
		i++;
	}
	return (NULL);
}
