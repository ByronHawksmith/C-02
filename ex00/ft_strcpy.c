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
#include <unistd.h>
int	main(void)
{
	char	*src = "Hello World!";
	char	dest[15];
	ft_strcpy(dest, src);
	printf("The string is: %s\n", dest);

	return (0);
}
*/
