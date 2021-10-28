#include "libft.h"

void	*ft_memmove(void	*dst, const	void	*src, size_t	n) {
	int	i;

	if (!dst && !src)
		return (NULL);
	if (dst < src) {
		i = 0;
		while (i < (int)n) {
			*(unsigned char*)(dst + i) = *(unsigned char*)(src + i);
			i++;
		}
	}
	else {
		i = (int)n - 1;
		while (i >= 0) {
			*(unsigned char*)(dst + i) = *(unsigned char*)(src + i);
			i--;
		}
	}
	return (dst);
}
