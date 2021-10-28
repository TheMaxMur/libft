#include "libft.h"

int	n_len(int	n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

int	ft_abs(int	n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int	n)
{
	char	*result;
	int	len;

	len = n_len(n);
	result = (char	*)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n < 0)
		result[0] = '-';
	else if (n == 0)
		result[0] = '0';
	while (n != 0)
	{
		len--;
		result[len] = ft_abs(n % 10) + '0';
		n = n / 10;
	}
	return (result);
}
