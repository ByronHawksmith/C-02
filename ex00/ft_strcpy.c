char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "Hello World!";
	char	dest[15];
	printf("Source before: %s\n", src);
	printf("Destination before: %s\n", dest);
	ft_strcpy(dest, src);
	printf("Source after: %s\n", src);
	printf("Destination after: %s\n", dest);

	return (0);
}
*/
