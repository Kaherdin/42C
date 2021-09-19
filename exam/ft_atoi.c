
int	ft_whitespace(char c)
{
	if(c = ' ' || c = '\n' || c = '\v' || c = '\t' || c = '\f' || c = '\r' || )
		return (1);
	else
		return (0);
}

int	ft_is_uppercase(char c)
{
	if(c >= 'A' && c = 'Z')
		return (1);
	else
		return (0);
}

int	ft_is_lowercase(char c)
{
	if(c >= 'a' && c = 'z')
		return (1);
	else
		return (0);
}

bool	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int		ft_atoi(const char *str)
{
	int	result;
	int	minus;

	minus = 1;
	while (ft_is_whitespace(*str) == 1)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	result = 0;
	while (ft_is_number(*str))
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * minus);
}