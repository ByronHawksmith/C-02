unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "Hello World!";
	char	dest[5];
	printf("Before: %s\n", dest);
	ft_strlcpy(dest, src, 6);
	printf("After: %s\n", dest);
}
*/
