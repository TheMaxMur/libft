#include "libft.h"

size_t	min(size_t	f, size_t	s)
{
	if (f > s)
		return (s);
	return (f);
}

size_t	ft_strlcat(char	*dst, const	char	*src, size_t	size)
{
	size_t	i;
	size_t	j;
	size_t	init_dst_len;

	i = 0;
	j = 0;
	init_dst_len = ft_strlen(dst);
	if (!size)
		return (ft_strlen(src));
	while (dst[i] && i < size)
		i++;
	if (i < size)
	{
		while (src[j] && i < (size - 1))
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	return (min(size, init_dst_len) + ft_strlen(src));
}
