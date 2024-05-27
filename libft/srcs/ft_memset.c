#include "libft.h"

void	*ft_memset(void	*ptr, int	value, size_t	n) {
	int	i;

	i = 0;
	while ((int)n > i) {
		*(unsigned char*)(ptr + i) = (unsigned char) value;
		i++;
	}
	return (ptr);
}
