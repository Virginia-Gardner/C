char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;
	char			*destout;

	i = 0;
	destout = dest;
	while (dest[i] != '\0')
	{
		destout[i] = dest[i];
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		destout[i + j] = src[j];
		j++;
	}
	destout[i + j] = '\0';
	return (destout);
}
