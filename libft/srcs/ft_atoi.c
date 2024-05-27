#include "libft.h"

int	check_litterals(char	c)
{
	if (c == ' ' || c == '\f' || c == '\n' || \
			c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

long	int	setter(int	*neg, const	char	*s)
{
	long	int	i;
	
	i = 0;
	while (check_litterals(s[i]))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			(*neg) = -1;
		i++;
	}
	return (i);
}

int	buffer_overflow(int	neg)
{
	if (neg == 1)
		return (-1);
	return (0);
}

int	ft_atoi(const	char	*s)
{
	long	int	i;
	int	neg;
	unsigned	long	long	int	result;

	i = 0;
	neg = 1;
	result = 0;
	i = setter(&neg, s);
	while (ft_isdigit(s[i]))
	{
		result = result * 10 + (s[i] - 48);
		i++;
	}
	if (i > 19 || result >= 9223372036854775808ULL)
		return (buffer_overflow(neg));
	return ((int)result * neg);
}
