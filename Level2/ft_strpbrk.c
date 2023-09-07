char *ft_strpbrk(char *src, char *dst)
{
	int i = 0;
	while (*src)
	{
		while (dst[i])
		{
			if (*src == dst[i])
			{
				return (char *)src;
			}
			i++;
		}
		i = 0;
		src++;
	}
	return (NULL);
}
