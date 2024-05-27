#include "libft.h"

int	ft_isprint(int	ch) {
	if (ch >= 0x20 && ch <= 0x7E)
		return (1);
	return (0);
}
