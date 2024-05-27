#include "libft.h"

void *ft_calloc(size_t num, size_t size)
{
	void	*tmp;

	tmp = malloc(num * size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, num * size);
	return (tmp);
}
