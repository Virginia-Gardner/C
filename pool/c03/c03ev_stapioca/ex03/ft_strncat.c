char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;
	char			*destout;

	destout = dest;
	i = 0;
	while (dest[i] != '\0')
	{
		destout[i] = dest[i];
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		destout[i + j] = src[j];
		j++;
	}
	destout[i + j] = '\0';
	return (destout);
}
