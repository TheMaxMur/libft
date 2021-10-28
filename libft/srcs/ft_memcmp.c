#include "libft.h"

int	ft_memcmp(const	void	*lhs, const	void	*rhs, size_t	n) {
	int	i;

	i = 0;
	while (i < (int)n) {
		if (*(unsigned char*)(lhs + i) != *(unsigned char*)(rhs + i))
			return (*(unsigned char*)(lhs + i) - *(unsigned char*)(rhs + i));
		i++;
	}
	return (0);
}
