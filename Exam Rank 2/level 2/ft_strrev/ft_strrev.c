int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}

char	*ft_strrev(char *str)
{
	int i = 0;
	int len = 0;
	char tmp = 0;

	len = ft_strlen(str) - 1;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return(str);
}