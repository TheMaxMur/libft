#include "libft.h"

void	*ft_memcpy(void	*dst, const	void	*src, size_t	n) {
	int	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < (int)n) {
		*(unsigned char*)(dst + i) = *(unsigned char*)(src + i);
		i++;
	}
	return (dst);
}
